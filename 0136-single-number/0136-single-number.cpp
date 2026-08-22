class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int shivam=0;

        for(int i=0; i<nums.size(); i++){
            shivam = shivam ^ nums[i];
        }
        return shivam;
        
    }
};