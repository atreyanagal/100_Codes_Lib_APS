//https://practice.geeksforgeeks.org/contest/the-easiest-ever-coding-challenge-4/instructions/

class Solution {
  public:
    bool specialArray(int N, vector<int> &arr) 
    {
        
        int s=arr[0];
        
        for(int i=1;i<N;i++)
        {
            if(s>=arr[i])
            {
                return false;
            }
                
            s=s+arr[i];
        }
        
        return true;
    }
};
