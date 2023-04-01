//https://www.codechef.com/START83C/problems/XOR_ORDER

#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int testcase,i;

	cin>>testcase;

	while(testcase--)
	{
	    long long x,y,z,c=0,res;

	    cin>>x>>y>>z;

	    for(i=0;i<=100;i++)
	    {
	        if(((x^i)<(y^i))&&((y^i)<(z^i)))
	        {
	            c++;
	            res=i;
	            break;
	        }
	    }

	    if(c==0)
	        cout<<"-1"<<endl;
	        
	    else
	    cout<<res<<endl;
	}

	return 0;
}