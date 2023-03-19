//https://www.codechef.com/START80C/problems/PERMSUBSEQ?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int i,tc;

  cin>>tc;

  while(tc--)
  {
      
      int num;

      cin>>num;

      map<int,int> m;
      
      for(i=0;i<num;i++)
      {
          int x;
          cin>>x;
          m[x]++;
      }
      
      long long c=0,max=1;

      int i=1;

      for(auto it:m)
      {
          if(it.first!=i)
          {
            break;
          }
              
          if(it.second>1)
          {
              max=(max*it.second)%1000000007;
          }
              
          c=c+max;
          i++;
      }
      
      cout<<c%1000000007<<endl;
  }
  return 0;
}