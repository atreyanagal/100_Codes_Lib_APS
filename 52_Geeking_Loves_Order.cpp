//https://practice.geeksforgeeks.org/contest/the-easiest-ever-coding-challenge-4/problems/

//User function Template for C++

class Solution
{   
public:
    int validString(int N, string str)
    {
    
    int i;
    
    for(i=1;i<N;i++)
    {
            if(str[i]<str[i-1])
                return 0;
    }
    return 1;
    }
};