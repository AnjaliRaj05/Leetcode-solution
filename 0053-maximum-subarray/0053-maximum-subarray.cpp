class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // bruit force approch time complexity o(n3)
        // int sum=0;
        // int max_sum=INT_MIN;
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=i;j<nums.size();j++)
              
        //       {
        //           sum=0;
        //           for(int k=i;k<=j;k++)
        //           {
        //               sum+=nums[k];
        //           }
        //           max_sum=max(max_sum,sum);
        //       }
            
        // }
        
        // return max_sum;
        
      // little optimize code with time complexity (on2)
        
        // int sum=0, max_sum=INT_MIN;
        // for(int i=0;i<nums.size();i++)
        // {    sum=0;
        //     for(int j=i;j<nums.size();j++)
        //     {
        //         sum+=nums[j];
        //         max_sum=max(max_sum,sum);
        //     }
        // }
        // return max_sum; 

        // optimized code with time complexity o(n)  kadane algorithm
        int sum=0,max_sum=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
        
        sum+=nums[i];
        max_sum=max(max_sum,sum);
        sum=max(sum,0);
        }
        return max_sum;
    }
};