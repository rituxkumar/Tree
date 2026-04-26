class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> skipLength;
        string result;

        for (char ch : s) {
            if (ch == '(') {
                skipLength.push(result.length());
            } else if (ch == ')') {
                int l = skipLength.top();
                skipLength.pop();
                reverse(result.begin() + l, result.end());
            } else {
                result.push_back(ch);
            }
        }
        return result;
    }
};