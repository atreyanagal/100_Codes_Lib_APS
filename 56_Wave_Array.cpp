//https://practice.geeksforgeeks.org/contest/the-easiest-ever-coding-challenge-4/instructions/

//User function template for C++

class Solution{
public:
    void convertToWave(vector<int>& vec, int N){
        
        int i;
        
        if(N%2==0){
            for(i=0;i<N;i=i+2){
                swap(vec[i],vec[i+1]);
            }
        }
        else{
            for(i=0;i<N-1;i=i+2){
                swap(vec[i],vec[i+1]);
            }
        }
    }
};