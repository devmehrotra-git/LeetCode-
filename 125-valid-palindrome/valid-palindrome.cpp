class Solution {
public:
//one way
    /*bool isPalindrome(string s) {
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
    }*/

    //two pointer
    bool isPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j)
        {
            while(i<j and !isalnum(s[i]))
            i++;
            while(i<j and !isalnum(s[j]))
            j--;
            if(tolower(s[i])!=tolower(s[j]))
            return false;
            i++;
            j--;
        }
        return true;
    }
};