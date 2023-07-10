//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	   for (int i = 0; i < S.length() / 2; i++)
    {
 
        // If S[i] is not equal to
        // the S[N-i-1]
        if (S[i] != S[S.length() - i - 1])
        {
            // Return No
            return 0;
        }
    }
    // Return "Yes"
    return 1;
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends