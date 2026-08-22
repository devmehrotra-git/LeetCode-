class Solution {
public:
    bool checkDivisibility(int n) {
        int nn=n;
        int s=0;
        int prod=1;
        while(nn>0)
        {
            s+=nn%10;
            prod*=nn%10;
            nn/=10;
        }
        s+=prod;
        if(n%s==0)
        return true;
        return false;
    }
};