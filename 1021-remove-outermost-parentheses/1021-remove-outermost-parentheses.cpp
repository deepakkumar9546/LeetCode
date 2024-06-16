class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> stack;
        string result = "";
        for (char ch : s) {
            if (ch == '(') {
                if (!stack.empty()) {
                    result += ch;
                }
                stack.push(ch);
            } else if (ch == ')') {
                stack.pop();
                if (!stack.empty()) {
                    result += ch;
                }
            }
        }

        return result;
    }
};