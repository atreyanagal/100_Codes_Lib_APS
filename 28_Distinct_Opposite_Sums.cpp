//https://www.codechef.com/START79D/problems/DISTOPPSUMS

#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int i,testcase;

  cin>>testcase;

  while(testcase--)
  {
      int num;

      cin>>num;

      vector<int> vec(num);

      for(i=0;i<num/2;i++)
      {
          vec[i]=i+1;
      }

      for(i=num/2;i<num;i++)
      {
          vec[i]=num-(i-(num/2));
      }

      for(i=0;i<num;i++)
      {
          cout<<vec[i]<<" ";
      }

      cout<<endl;  
  }

  return 0;
}