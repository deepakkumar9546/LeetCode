class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for (auto ch : s) {
            mp[ch]++;
        }
        pair<int, char> p;
        vector<pair<int, char>> v;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            p = make_pair(it->second, it->first);
            v.push_back(p);
        }
        sort(v.begin(), v.end(), greater<pair<int, char>>());
        string ans = "";
        for (auto x : v) {
            ans.append(x.first,x.second);
        }
        return ans;
    }
};