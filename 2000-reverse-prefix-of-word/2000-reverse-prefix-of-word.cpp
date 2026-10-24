
class Solution {
public:
    string reversePrefix(string word, char ch) {
        string answer = "";

        for(int i = 0; i < word.length(); i++) {
            answer += word[i];

            if(word[i] == ch) {
                reverse(answer.begin(), answer.end());

                answer += word.substr(i + 1);
                return answer;
            }
        }

        return answer;
    }
};
