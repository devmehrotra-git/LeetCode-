class Solution {
public:
    bool isPalindrome(string s) {
        string ss="";
        for(char i:s)
        {
            if(isalnum(i))
            {
                ss+=tolower(i);
            }
        }
        int n=ss.size();
        for(int i=0;i<n/2;i++)
        {
            if(ss[i]!=ss[n-i-1])
            return false;
        }
        return true;
    }
};