class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        int i=0;
        int x=0;
        string c="";
        string b = strs[0];
        for (int i = 1; i < strs.size(); i++)        
        {
            string a="";
            for (int j = 0; j < strs[i].size() && j < b.size(); j++) 
            {            
                if (strs[i][j] == b[j])
                {                
                    a += strs[i][j];
                }    
                else
                {
                    break;
                }
            }
            b = a;
        }  
        return b;      
    }
};