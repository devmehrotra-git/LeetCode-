class Solution {
public:
    int minMoves(vector<int>& nums) {
        /* int mn=*min_element(nums.begin(),nums.end());
        int moves=0;
        for(int i=0;i<nums.size();i++)
        {
            moves+=nums[i]-mn;
        }
        return moves; */

        int sum=0;
        for(int i=0;i<nums.size();i++)
        sum+=nums[i];
        int mn=*min_element(nums.begin(),nums.end());
        return sum-nums.size()*mn;
    }
};