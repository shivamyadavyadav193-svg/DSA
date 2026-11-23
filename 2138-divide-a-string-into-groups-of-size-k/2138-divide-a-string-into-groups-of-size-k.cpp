class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {

        vector<string> ans;

        for(int i = 0; i < s.length(); i += k) {

            string temp = "";

            for(int j = i; j < i + k && j < s.length(); j++) {
                temp += s[j]; 
            }

            while(temp.length() < k) {
                temp += fill;
            }

            ans.push_back(temp);
        }

        return ans;
    }
};