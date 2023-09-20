class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      //int searchInsert(vector<int>& nums, int target) {
       // int low=0;
       // int high = nums.size()-1;
       // int mid=0;
       // while(low<=high){
       //     mid=(low+high)/2;
       //     if(nums[mid]==target){
       //         return mid;
       //     }
       //     else if(nums[mid]>target){
       //         high=mid-1;
       //     }
       //     else
       //     low=mid+1;
       // } 
       // return high+1;
        int start=0;
        int end =nums.size()-1;
        int mid =0;
        while(start<=end)
        {
            mid = (start+end)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[mid]<target)
            { 
                start =mid+1;
             }
            else{
                end= mid-1;
            }
        }
            return end+1;
            
    }
};