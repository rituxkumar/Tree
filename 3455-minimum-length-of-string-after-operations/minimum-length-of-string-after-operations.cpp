class Solution {
public:
    int minimumLength(string s) {
        int n = s.length();
        vector<int> result(26, 0);
        int deleted = 0;

        for (int i = 0; i < n; i++) {
            result[s[i] - 'a']++;

            if (result[s[i] - 'a'] == 3) {
                result[s[i] - 'a'] -= 2;
                deleted += 2;
            }
        }
        return n - deleted;
    }
};