class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int s1=nums1.size();
        int s2=nums2.size();
        vector<int>nums3 (s1+s2);
        int j=0,k=0,i=0,x,y;
        if(s1>=s2)
           { x=s1;
            y=s2;}
        else
            {x=s2;
            y=s1;}
        while (i < s1 && j < s2) 
        {
            if (nums1[i] <= nums2[j]) 
            {
                nums3[k++] = nums1[i++];
            } 
            else 
            {
                nums3[k++] = nums2[j++];
            }
        }
        while (i < s1) 
        {
            nums3[k++] = nums1[i++];
        }
        while (j < s2) 
        {
            nums3[k++] = nums2[j++];
        }
        if(nums3.size()%2!=0)
        {
            return(nums3[nums3.size()/2]);
        }
        else
        {
            return(((nums3[(nums3.size()/2)-1]+nums3[nums3.size()/2])/2.0));
        }
        
    }
};