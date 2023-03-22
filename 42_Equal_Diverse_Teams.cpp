//https://www.hackerearth.com/challenges/competitive/march-circuits-23/algorithm/equal-diverse-teams-cbdb8fe2/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int testcase,i;
	cin>>testcase;
 
	while(testcase--)
	{
		int m,n;
 
		cin>>m>>n;
 
		int t;
 
		map<int,int> mp;
 
		int e=0;
 
		for(i=0;i<m;i++)
		{
			cin>>t;
 
			mp[t]++;
 
			if(mp[t]==2)
            {
			    e++;
            }
		}
 
		if(mp.size()>2*n)
        {
		    cout<<"NO"<<endl;
        }
 
		else if(mp.size()==2*n)
        {
		    cout<<"YES"<<endl;
        }
 
		else if(mp.size()==n && e==n)
        {
		    cout<<"YES"<<endl;
        }
 
		else if(mp.size()-n<n && mp.size()+e>=2*n)
        {
		    cout<<"YES"<<endl;
        }
 
		else
        {
		    cout<<"NO"<<endl;
        }
 
	}
    
    return 0;
}