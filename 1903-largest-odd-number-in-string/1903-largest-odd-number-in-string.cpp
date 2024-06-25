class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        string s = "";
        int index;
        for (int i = n; i >= 0; i--) {
            if (num[i] % 2 != 0) {
                index = i;
                break;
            }
        }
        for (int i = 0; i <= index; i++) {
            s += num[i];
        }
        return s;
    }
};