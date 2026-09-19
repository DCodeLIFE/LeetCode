class Solution {
public:
    int romanToInt(string s) {
    int n = s.size();
    int a[n];
    if (n == 0) 
    return 0;
    for (int i = 0; i < n; i++) 
    {
        if (s[i] == 'I') 
        a[i] = 1;
        else if (s[i] == 'V') 
        a[i] = 5;
        else if (s[i] == 'X')
        a[i] = 10;
        else if (s[i] == 'L') 
        a[i] = 50;
        else if (s[i] == 'C') 
        a[i] = 100;
        else if (s[i] == 'D') 
        a[i] = 500;
        else if (s[i] == 'M') 
        a[i] = 1000;
        else a[i] = 0;
    }
    int sum = 0;
    for (int i = n - 1; i >= 0; i--) 
    {
        if (i < n - 1 && a[i] < a[i + 1]) 
        {
            sum -= a[i];
        }
        else {
            sum += a[i];
        }
    }
    return sum;
    }
};