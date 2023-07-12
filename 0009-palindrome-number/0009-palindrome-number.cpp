class Solution {
public:
    bool isPalindrome(int x) {
      int temp = x;
        long total = 0;
        while(temp>0){
            total = total*10 + (temp%10);
            temp/=10;
        }
        return total == x;
       
    }
};
