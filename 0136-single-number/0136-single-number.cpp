class Solution {
public:
    int singleNumber(vector<int>& nums) {
  
    //    int i,j=0;
    //     int n=nums.size();
    //     for(int i=0;i<n;i++){
    //         if(nums[i]!=nums[j])
    //         {
    //             return nums[i];


    //         }

    //     }
    //     return 0;
    // unordered_map<int ,int> mp;
    // for(int i=0;i<nums.size();i++)
    // {
    //     mp[nums[i]]++;
    // }
    // for(auto x:nums)
    //   {
          
    //   }
    int ans=0;
	   for(auto x:nums)
	   ans^=x;
	   return ans;
    }
};