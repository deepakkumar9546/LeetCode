class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        set<pair<int, int>> ans;
        int i = 0, j = i + 1;
        sort(nums.begin(), nums.end());

        while (j < n) {
            int diff = abs(nums[i] - nums[j]);
            if (diff == k) {
                ans.insert({nums[i], nums[j]});
                j++;
                i++;
            } else if (diff < k) {
                j++;
            } else {
                i++;
            }
            if (i == j) {
                j++;
            }
        }
        return ans.size();
    }
};