class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            mpp[nums[i]]++;
        }
        int ele=-1;
        int freq=0;
        for(auto i:mpp)
        {
            if(i.second>freq)
            {
                freq=i.second;
                ele=i.first;
            }
            else if(i.second==freq)
            {
                if(i.first<ele)
                ele=i.first;
            }
        }
        return ele;
    }
};