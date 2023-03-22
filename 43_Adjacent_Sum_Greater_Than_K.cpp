//https://www.hackerearth.com/challenges/competitive/march-circuits-23/algorithm/adjacent-sum-greater-than-k-f41e3ec4/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
	int tc;
 
	cin>>tc;
 
	while(tc--)
	{
		long long m,n;
 
		cin>>m>>n;
 
		if((n-m)>=2)
        {
		    cout<<"-1"<<endl;
        }
 
		else if(n<=3)
		{
			for(long long i=1;i<=m;i++)
				cout<<i<<" ";
			
			cout<<endl;
		}
 
		else if((n%2)!=0)
		{
			ll st=1;
			ll en=n-1;
			while(st<en)
			{
				cout<<st<<" "<<en<<" ";
				st++;
				en--;
			}
			for(ll i=n;i<=m;i++)
			cout<<i<<" ";
			cout<<endl;
		}
		else
		{
			ll st=1,en=n-1;
 
			while(st<en)
			{
				cout<<st<<" "<<en<<" ";
				st++;
				en--;
			}
 
			cout<<st<<" ";
 
			for(ll i=n;i<=m;i++)
            {
			    cout<<i<<" ";
            }
 
			cout<<endl;
		}
	}
 
    return 0;
}