class Solution {
public:
    string makeGood(string s) {

        string st = "";

        for (int i = 0; i < s.size(); i++) {

            if (!st.empty() &&
                tolower(st.back()) == tolower(s[i]) &&
                st.back() != s[i]) {

                st.pop_back();
            }
            else {
                st.push_back(s[i]);
            }
        }

        return st;
    }
};