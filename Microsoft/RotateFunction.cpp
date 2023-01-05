class Solution {
public:
    int maxRotateFunction(vector<int>& nums) 
    {
        int count=0,sum=0;
        for(int i=0;i<nums.size();i++)
        {
            count=count+(nums[i]*i);
            sum=sum+nums[i];
        }
        int max=count;
        for(int i=nums.size()-1;i>=0;i--)
        {
            count=count+sum-(nums[i]*nums.size());
            cout << count;
            if(count>max)
            max=count;
        }
        return max;
    }
};