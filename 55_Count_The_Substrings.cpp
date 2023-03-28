//https://practice.geeksforgeeks.org/contest/the-easiest-ever-coding-challenge-4/instructions/

//User function Template for C++
class Solution
{
    public:
    
    int countSubstring(string Str)
    {
        map<int,int> mp;
        
        long long int c=0;
        
        int r=0,i;
        
        for(i = 0 ; i < Str.size() ; i++)
        {
            if(Str[i] >='A' and Str[i] <='Z')
            {
                c++;
            }
            else
            {
                c--;
            }
            if(c==0)
            {
                r++;
            }
            if(mp.find(c) != mp.end())
            {
                r=r+mp[c];
            }
            
            mp[c]++;
        }
        
        return r;
    }
};