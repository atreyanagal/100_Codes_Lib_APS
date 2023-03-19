//https://www.codechef.com/START79D/problems/ONEORTWO

#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int testcase;

  cin>>testcase;

  while(testcase--)
  {
      int a,b;
      
      cin>>a>>b;

      if(a==b)
      {
          if(a%2==1)
          {
            cout<<"CHEF"<<endl;;
          }
              
          else
          {
              cout<<"CHEFINA"<<endl;
          }
      }

      else if((a+b)<=3)
      {
          cout<<"CHEF"<<endl;
      }

      else if(a/2>b/2)
      {
          cout<<"CHEF"<<endl;;
      }

      else
      {
          if(a%2==1 && (a+1)==b)
          {
              cout<<"CHEF"<<endl;
          }

          else
          {
              cout<<"CHEFINA"<<endl;
          }
      }
  }
  return 0;
}