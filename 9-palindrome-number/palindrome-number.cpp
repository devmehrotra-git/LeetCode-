class Solution {
public:
    long reverse(int n)
    {
        long rev=0;
        while(n>0)
        {
            int r=n%10;
            rev=rev*10+r;
            n/=10;
        }
        return rev;
    }
    bool isPalindrome(int x) {
        int r=reverse(x);
        if(r==x)
        return true;
        else
        return false;
    }
};