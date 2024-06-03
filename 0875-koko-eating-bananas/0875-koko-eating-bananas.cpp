class Solution {
private:
    int findMax(vector<int> v) {
        int maxi = INT_MIN;
        int n = v.size();
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, v[i]);
        }
        return maxi;
    }

    double calculateTotalHours(vector<int> v, int hourly) {
        double totalH = 0;
        int n = v.size();
        for (int i = 0; i < n; i++) {
            totalH += ceil((double)(v[i]) / (double)(hourly));
        }
        return totalH;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 0;
        int high = findMax(piles);
        while (low <= high) {
            int mid = (low + high) / 2;
            double reqTime = calculateTotalHours(piles, mid);
            if (reqTime <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};