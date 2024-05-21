class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int> mpp;
        int presum = 0, cnt = 0;
        mpp[0] = 1;
        for (int i = 0; i < n; i++) {
            presum = presum + nums[i];
            int remove = presum - k;
            cnt = cnt + mpp[remove];
            mpp[presum] = mpp[presum] + 1;
        }
        return cnt;
    }
};