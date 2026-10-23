
class Solution {
public:
    string replaceDigits(string s) {
        string answer = "";

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '0') {
                answer += s[i-1] + 0;
            }
            else if(s[i] == '1') {
                answer += s[i-1] + 1;
            }
            else if(s[i] == '2') {
                answer += s[i-1] + 2;
            }
            else if(s[i] == '3') {
                answer += s[i-1] + 3;
            }
            else if(s[i] == '4') {
                answer += s[i-1] + 4;
            }
            else if(s[i] == '5') {
                answer += s[i-1] + 5;
            }
            else if(s[i] == '6') {
                answer += s[i-1] + 6;
            }
            else if(s[i] == '7') {
                answer += s[i-1] + 7;
            }
            else if(s[i] == '8') {
                answer += s[i-1] + 8;
            }
            else if(s[i] == '9') {
                answer += s[i-1] + 9;
            }
            else {
                answer += s[i];
            }
        }

        return answer;
    }
};
