class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;//if negative return false;
        
        unsigned int temp=x,rev=0;
        while(temp){//reverse the number 
            rev=rev*10+temp%10;
            temp/=10;
        }
        return(x == rev); //check for palindrome.
    }
};