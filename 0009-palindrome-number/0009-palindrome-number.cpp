class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||(x%10==0&&x!=0))
        {
            return (false);
        }        
        long int a=x,s=0,n=0;
        while(a>0)
        {
            n=a%10;
            s=s*10+n;
            a=a/10;
        }
         while (s>0||x>0)
        {
            if(s%10==x%10)
            {
             s=s/10;
            x=x/10;
            continue;}
            else 
            return (false);
           
        }
        return (true);
    }
};