class Solution {
private:
    int findfirst(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int first = -1;
        while (left <= right) {
            int mid = (left + (right - left) / 2);
            if (nums[mid] == target) {
                first = mid;
                right = mid - 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return first;
    }

    int findlast(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int last = -1;
        while (left <= right) {
            int mid = (left + (right - left) / 2);
            if (nums[mid] == target) {
                last = mid;
                left = mid + 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return last;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findfirst(nums, target);
        int last = findlast(nums, target);
        return {first, last};
    }
};
