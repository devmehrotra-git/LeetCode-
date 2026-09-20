class Solution {
public:
    int reverseDegree(string s) {
        long long sum=0;
        for(int i=0;i<s.size();i++)
        {
            sum+=(i+1)*(123-s[i]);
        }
        return sum;
    }
};