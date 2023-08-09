class Solution {
public:
    int singleNumber(vector<int>& nums) {
//         unordered_map<int, int> m;
        
//         for(auto x: nums){
//             m[x]++;
//         }

//         for(auto x: m){
//             if(x.second == 1){
//                 return x.first;
//             }
//         }
        
//         return -1;
        // unordered_map<int,int> mp;
        // for(int i=0;i<nums.size();i++)
        // {
        //    mp[nums[i]]++; // itrating through mp
        // }
        //     for(auto x:mp)
        //    if(x.second==1)
        //     return x.first;
        //        return -1;
        // int a=0;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     a=a^nums[i];
        //        }
        //        return a;
        // int i=0;
        // int j=0;
        // for(int num :nums)
        // {
        //     i=(i^num)&~j;
        //     j=(j^num)&~i;
        // }

        // return i;

        int ans=0;
        for(int i=0;i<32;i++){
            int count=0;
            for(auto element:nums){
            if(element&(1<<i))
                {
                    count++;
                }
            }
            if(count %3){
               ans+=(1<<i); 
            }
        }
        return ans;
        }
        };
  