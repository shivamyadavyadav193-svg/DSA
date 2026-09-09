class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;

        for(int i = 0; i < nums.size(); i++) {
            int ans = 0;

            for(int j = 0; j < nums.size(); j++) {
                if(nums[j] < nums[i]) {
                    ans++;
                }
            }

            result.push_back(ans);
        }

        return result;
    }
};