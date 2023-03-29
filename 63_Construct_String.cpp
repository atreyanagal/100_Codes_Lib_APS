//https://www.codechef.com/problems/CONSTR

#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int testcase,i;

	cin>>testcase;

	while(testcase--)
	{
	    int num;
        string str;

	    cin>>num>>str;

	    string key="";
        key=key+str[0];

	    int z=1;

	    for(i=1;i<num;i++)
        {
	        if(str[i]==str[i-1])
	            z++;
	        
	        else
            {
	          if(z%2==0)
	            key+=str[i-1];

	          z=1;
	          key+=str[i];
	        }
	    }

	    if(z%2==0)
        {
	       key=key+str[num-1];
        }

	    cout<<key<<endl;
	    
	}
	return 0;
}