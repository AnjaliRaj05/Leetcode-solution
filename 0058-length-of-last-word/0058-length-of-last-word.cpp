class Solution {
public:
    int lengthOfLastWord(string s) {
        // int n=s.length();
        // string word="";
        // for(int i=0;i<n;i++){
        //     if(s[i]== ' ' or i==(n-1))

        int ans=0, i=s.size()-1;
        while(i>=0 && s[i]==' '){
            i--;
        }
        while(i>=0 && s[i]!=' '){
            i--; ans++;
        }
        return ans;
        }
    
};