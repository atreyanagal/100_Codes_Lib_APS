//https://www.codechef.com/problems/OPMIN?tab=statement

#include<bits/stdc++.h>
using namespace std;

int main() 
{	
	int tc,i;

	cin>>tc;

	while(tc--)
	{
	    int num;
	    cin>>num;

	    int minimum=INT_MAX;
	    map<int,int> m;

	    int t;

	    for(i=0;i<num;i++)
	    {
	        cin>>t;

	        if(t<minimum)
			{
	        	minimum=t;
			}

	        m[t]++;
	    }

	    cout<<num-m[minimum]<<endl;
	}
	return 0;
}