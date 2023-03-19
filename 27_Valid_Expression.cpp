//https://www.codechef.com/START78D/problems/EVALMAS

#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int testcase,i;

	cin>>testcase;

	while(testcase--)
  {
	  int n,z;

	  cin>>n>>z;

	    if(z>(n+1)||z<(-n+1))
      {
           cout<<"-1"<<endl;
      }
	       
	    else
      {
	        if(z>1)
          {
	            for(i=1;i<=n+1-z;i++)
              {
	               cout<<"*";
	            }

	            for(i=n-z+2;i<=n;i++)
              {
                  cout<<"+";
              }
	                
	            cout<<endl;
	        }

	        else{

	            for(i=1;i<=n+z-1;i++)
              {
	               cout<<"*";
	            }

	            for(i=n+z;i<=n;i++)
              {
                cout<<"-";
              }
	                
	           cout<<endl;
	        }
	    }
	}
	return 0;
}