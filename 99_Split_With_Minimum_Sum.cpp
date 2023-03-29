//https://leetcode.com/contest/biweekly-contest-99/problems/split-with-minimum-sum/\

class Solution 
{
public:
    int splitNum(int n) 
    {
        
       int i;
       vector<int> vec;
        
        while(n)
        {
            vec.push_back(n%10);
            n/=10;
        }
        
        sort(vec.begin(),vec.end());

        int j=vec.size()-1;
        int a=0;
        int b=0;

        for(i=0;i<vec.size();i=i+2)
           a=a*10+vec[i];
        
        for(i=1;i<vec.size();i=i+2)
           b=b*10+vec[i];
        
        return a+b;
    }
};