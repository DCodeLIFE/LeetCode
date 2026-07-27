class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
       int f=-1,i,j;
       {
           for(i=0;i<nums.size()-1;i++)
           {
                for(j=i+1;j<nums.size();j++)
                {
                    if((nums[i]-1)*(nums[j]-1)>f)
                    {f=(nums[i]-1)*(nums[j]-1);}
                }
           }
       }
    if(f==-1)
    return (0);
    else 
    return (f);
    }
    
};