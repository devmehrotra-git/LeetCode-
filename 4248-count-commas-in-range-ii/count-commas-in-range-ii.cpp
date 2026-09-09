class Solution {
public:
    long long countCommas(long long n) {
        if(n<=999)
        return 0;
        else if(n<=999999)
        return (n-999)*1;
        else if(n<=999999999)
        return (n-999999)*2 + 1*999000;
        else if(n<=999999999999)
        return (n-999999999)*3+999000000*2+1*999000;
        else if(n<=999999999999999)
        return (n-999999999999)*4+999000000000*3+999000000*2+1*999000;
        else
        return 1*5+999000000000000*4+999000000000*3+999000000*2+1*999000;
    }
};