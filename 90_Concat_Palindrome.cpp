//https://www.codechef.com/START77D/problems/CONCATPAL

#include<bits/stdc++.h>
using namespace std;

int main() 
{
  int tc,i;

  cin>>tc;

  while(tc--)
  {
      map<char,int> m;

      int p,q;

      string str,a;
      
      cin>>p>>q>>str>>a;
      
      if(str.size()<a.size())
      {
          swap(str,a);
      }
      
      for(i=0;i<str.size();i++)
      {
        m[str[i]]++;
      }
      
      for(i=0;i<a.size();i++)
      {
        m[a[i]]--;
      }
      
      int f=0,c=0;

      for(auto itr:m)
      {
          if(itr.second<0)
          {
              cout<<"NO"<<endl;
              f++;
              break;
          }
          c+=itr.second%2;
      }
      
      if(!f)
      {
        if((p+q)%2 && c==1)
        {
            cout<<"YES"<<endl;
        }
      
        else if((p+q)%2==0 && !c)
        {
            cout<<"YES"<<endl;
        }
      
        else
        {
            cout<<"NO"<<endl;    
        }
      }
  }
  return 0;
}