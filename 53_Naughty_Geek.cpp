//https://practice.geeksforgeeks.org/contest/the-easiest-ever-coding-challenge-4/instructions/

//User function Template for C++

class Solution{   
public:
     long long int totalWays(long long int  n)
    {
        long long int s=1,i;
       for(i=1;i<=n;i++)
       {
            s*=i;
       }
    
        return s;
    }
};