
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> answer;
        int j = 0;

        for(int i = 1; i <= n; i++) {
            answer.push_back("Push");

            if(i == target[j]) {
                j++;
            }
            else {
                answer.push_back("Pop");
            }

            if(j == target.size()) {
                break;
            }
        }

        return answer;
    }
};
