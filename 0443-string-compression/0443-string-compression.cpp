class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index = 0;

        for (int i = 0; i < n; i++) {
            char ch = chars[i];
            int count = 0;

            while (i < n && chars[i] == ch) {
                count++;
                i++;
            }

            chars[index++] = ch;

            if (count > 1) {
                string s = to_string(count);

                for (int j = 0; j < s.length(); j++) {
                    chars[index++] = s[j];
                }
            }

            i--;
        }

        return index;
    }
};