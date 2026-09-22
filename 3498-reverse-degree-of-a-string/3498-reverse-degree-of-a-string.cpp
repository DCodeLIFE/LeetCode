class Solution {
public:
    int reverseDegree(string s) 
    {int sum=0,n;
        for (int i=0;s[i]!='\0';i++)
        {
            n='z'-s[i]+1;
            sum=sum+(n*(i+1));
        }
        return (sum);

    }
};