class Solution {
public:
    int minimumDeletions(string s) {
        stack<char> st;
        int count = 0;

        for (char& ch : s) {
            if (st.empty())
                st.push(ch);
            else if (ch < st.top()) {
                count++;
                st.pop();
            } else
                st.push(ch);
        }
           return count;
    }
 
};
