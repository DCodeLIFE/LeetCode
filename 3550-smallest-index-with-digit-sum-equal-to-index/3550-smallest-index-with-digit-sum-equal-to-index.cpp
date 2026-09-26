class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for (int i=0;i<=nums.size()-1;i++)
        {int t=nums[i];
        nums[i]=0;
            while(t>0)
            {
                nums[i]+=t%10;
                t /=10;
            }
            
                if(nums[i]==i)
                return nums[i];
        }
        return (-1);
    }
};