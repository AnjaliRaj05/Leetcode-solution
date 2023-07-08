//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        ///Your code here
        // long long int maxi=INT_MIN,sum=0;
        // for(int i=0;i<n;i++)
        // {
        //     sum+=arr[i];
        //     maxi=max(maxi,sum);
        // }
        // return maxi;
        // for(int i=n-1;i>=0;i++)
        // {
        //     sum+=arr[i];
        //     maxi=max(maxi,sum);
        //     if(sum<0)
        //     {
        //         sum=0;
        //     }
        // }
        // return maxi;
        long ma=INT_MIN;
        long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            ma=max(ma,sum);
            if(sum<0){
                sum=0;
            }
        }
        return ma;
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends