class Solution {
public:
    int minimumLength(string s) {
        size_t res = s.size();
        int dic[26] = {0};
        for (size_t i = 0; i < s.size(); i++) {
            dic[s[i] - 'a']++;
            if (dic[s[i] - 'a'] != 1 && dic[s[i] - 'a'] % 2 ==1) {
                res -= 2;
            }
        }
        return res;
         
    }
};