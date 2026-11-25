class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i = 0; i < s.length(); i = i + 2*k)
        {
            int start = i;
            int end = i + k - 1;

            if(end >= s.length())
                end = s.length() - 1;

            while(start < end)
            {
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};