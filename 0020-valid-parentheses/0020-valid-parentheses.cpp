class Solution {
public:
    bool isValid(string s) {

        string st = "";

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push_back(s[i]);
            }
            else {
                if(st.empty())
                    return false;

                if(s[i] == ')' && st.back() == '(' ||
                   s[i] == ']' && st.back() == '[' ||
                   s[i] == '}' && st.back() == '{') {
                    st.pop_back();
                }
                else {
                    return false;
                }
            }
        }

        return st.empty();
    }
};