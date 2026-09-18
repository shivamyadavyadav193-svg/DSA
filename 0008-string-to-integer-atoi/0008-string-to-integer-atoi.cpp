class Solution {
public:
    int myAtoi(string s) {

        int i = 0;
        int sign = 1;
        int ans = 0;

        while (s[i] == ' ')
            i++;

        if (s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (s[i] == '+') {
            i++;
        }

        while (i < s.size() && s[i] >= '0' && s[i] <= '9') {

            int digit = s[i] - '0';

            if (ans > 214748364 || 
               (ans == 214748364 && digit > 7)) {
                return sign == 1 ? 2147483647 : -2147483648;
            }

            ans = ans * 10 + digit;
            i++;
        }

        return ans * sign;
    }
};