//https://www.codechef.com/START79D/problems/PRIMEFACT

#include<iostream>
using namespace std;

int main() 
{
  int testcase;

  cin>>testcase;

  while(testcase--)
  {
      int p,q;

      cin>>p>>q;

      if(p%2==0)
      {
          q--;
          cout<<((q-p)/2)+1<<endl;
      }

      else if(p%3==0)
      {
          p=p+3;
          q--;
          cout<<((q-p)/2)+2<<endl;
      }

      else if(p%5==0)
      {
          p=p+5;
          q--;
          cout<<((q-p)/2)+2<<endl;
      }

      else
      {
          p=p+7;
          q--;
          cout<<((q-p)/2)+2<<endl;
      }
  }
  return 0;
}