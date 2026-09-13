class Solution {
public:
    int maxPower(string s) {
        int mx=0,c=0;
        char prev=' ';
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch==prev)
            c++;
            else{
                c=1;
                prev=ch;
            }
            mx=max(c,mx);
        }
        return mx;
    }
};