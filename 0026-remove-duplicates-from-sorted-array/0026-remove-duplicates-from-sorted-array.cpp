class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int result = 0;
        for(int i = 1 ; i < nums.size() ; i++)  
        {
            if(nums[result] != nums[i]){
                nums[result+1] = nums[i];
                result++;
            }
        }
        return result + 1;
    }


};