class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v;
        int max_candies = *std::max_element(candies.begin(), candies.end());
        for (int i = 0; i < candies.size(); i++) {
            if ((candies[i] + extraCandies) >= max_candies) {
                v.push_back(true);
            } else {
                v.push_back(false);
            }
        }
        return v;
    }
};