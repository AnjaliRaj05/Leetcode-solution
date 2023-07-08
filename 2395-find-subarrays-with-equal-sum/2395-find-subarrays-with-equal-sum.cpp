class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
       unordered_map<int,int> m;
        for(int i=0;i<nums.size()-1;i++)
        {
            int c=nums[i]+nums[i+1];
            if(m.find(c)!=m.end())
                return 1;
            m[c]=1;
        }
        return 0;
    }
};