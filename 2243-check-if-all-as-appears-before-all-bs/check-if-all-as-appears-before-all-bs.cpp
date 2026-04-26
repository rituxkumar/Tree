class Solution {
public:
    bool checkString(string s) {
        int n = s.length();
        stack<char> st;

        for (char& ch : s) {
            if (st.empty()) {
                st.push(ch);
            } else if (ch < st.top()) {

                return false;
            } else
                st.push(ch);
        }
        return true;
    }
};