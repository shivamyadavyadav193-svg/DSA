
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int a = 0, b = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] <= 9)
                a = a + nums[i];
            else
                b = b + nums[i];
        }

        if(a > b || b > a)
            return true;
        else
            return false;
    }
};
