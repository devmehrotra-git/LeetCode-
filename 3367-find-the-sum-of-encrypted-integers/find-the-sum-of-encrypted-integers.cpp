class Solution {
public:
    int encrypt(int n){
        int c=0,l=0;
        while(n>0){
            int r=n%10;
            if(r>l)
            l=r;
            c++;
            n/=10;
        }
        int num=0;
        while(c>0)
        {
            num=num*10 + l;
            c--;
        }
        return num;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=encrypt(nums[i]);
            sum+=nums[i];
        }
        return sum;
    }
};