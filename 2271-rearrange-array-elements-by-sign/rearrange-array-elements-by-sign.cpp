class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int nn=nums.size();
        vector<int> n(nn);
        int pos=0,neg=1;
        for(int i=0;i<nn;i++)
        {
            if(nums[i]>=0)
            {
                n[pos]=nums[i];
                pos+=2;
            }
            else
            {
                n[neg]=nums[i];
                neg+=2;
            }
        }
        return n;
    }
};