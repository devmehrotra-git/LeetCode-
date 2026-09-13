class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        long long sum=0;
        int c=0;
        int n=nums.size();
        vector<long long> pre(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+nums[i];
        }
        unordered_map<long long,int> mpp;
        for(int i=0;i<n;i++)
        {
            if(pre[i]==k)
            c++;
            if(mpp.find(pre[i]-k)!=mpp.end())
            {
                c+=mpp[pre[i]-k];
            }
            mpp[pre[i]]++;
        }
        return c;
    }
};