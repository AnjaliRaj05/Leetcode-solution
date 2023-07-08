class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // int avg;
        // int sum=0;
        // for(int i=0;i<nums.size()-k;i++)
        // {    
        //     for(int j=i;j<i+k;j++)
        //     {   
        //         sum +=nums[j];
                
        //         cout<<nums[j]<<" ";
                
                
               

        //     }
        //     cout<<endl;
            
        // }
        // return 0;
         double sum=0,maxsum=0,avgsum=0;
        int start=0,end=0;
        int n=nums.size();
        while(end<k){
            sum=sum+nums[end++];
        }
        maxsum=sum/k;
        while(end<n){
            sum=sum-nums[start++];
            sum=sum+nums[end++];
            avgsum=sum/k;
            maxsum=max(avgsum,maxsum);
        }
        return maxsum;
    }
};