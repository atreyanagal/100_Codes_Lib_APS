//https://www.codechef.com/START80C/problems/SUMPERM

#include <iostream>
using namespace std;

int main() 
{
  int tc;

  cin>>tc;

  while(tc--)
  {
      int num;

      cin>>num;
      
      if((num%2)!=0)
          cout<<"-1"<<endl;
      
      else
      {
          int x=2,y=1;
          for(int i=0;i<(num/2);i++)
          {
              cout<<x<<" "<<y<<" ";
              x=x+2;
              y=y+2;
          }
          
          cout<<endl;
          
      }
  }

  return 0;
}