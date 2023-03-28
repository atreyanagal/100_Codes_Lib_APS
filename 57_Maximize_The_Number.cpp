//https://practice.geeksforgeeks.org/contest/the-easiest-ever-coding-challenge-4/instructions/

//User function Template for C++

class Solution{   
public:
     string maximumNumber(string str, int k)
    {
        int i = 0, j = str.size() - 1;
        
        while(i < j)
        {
            while(i < j and str[i] != '0')
                i++;
            
            while(i < j and str[j]  != '1')
                j--;
            
            if(i < j)
            {
                swap(str[i] , str[j]);
                k--;
                if(k == 0)
                    return str;
            }
        }
        return str;
    }
};