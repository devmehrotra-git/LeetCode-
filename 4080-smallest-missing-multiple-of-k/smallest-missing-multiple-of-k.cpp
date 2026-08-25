class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        for(int i=k;;i+=k)
        {
            if(count(nums.begin(), nums.end(), i)==0)
            return i;
        }
    }
};