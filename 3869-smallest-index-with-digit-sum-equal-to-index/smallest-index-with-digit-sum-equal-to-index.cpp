class Solution {
public:
    int sumDig(int n){
        int s=0;
        while(n>0)
        {
            s+=n%10;
            n/=10;
        }
        return s;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(sumDig(nums[i])==i)
                return i;
        }
        return -1;
    }
};