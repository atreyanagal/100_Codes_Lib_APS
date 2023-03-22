//https://www.hackerearth.com/challenges/competitive/march-circuits-23/algorithm/xorrrr-40caac1a/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() 
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
	ll num,x,y,s=0,ct=0,i;
 
	cin>>num;
 
	if(num%2==1)
    {
		cout<<0;
		return 0;
	}
 
	vector<vector<ll>> vec(num+1);
 
    for(i=1;i<=num;i++)
        vec[i] = vector<ll>(1,0);
    
	for(i=0;i<num-1;i++)
    {
		cin>>x>>y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	
	bool visit[num+1];
 
	for(i=1;i<=num;i++)
		visit[i]=0;
	
	ll q[num+num];
	ll f=1,r=1,u;
	q[r]=1;
	visit[1]=1;
 
	ll path[num+1];
	path[1]=0;
	s=0;
 
	while(f<=r && ct<num)
    {
		u=q[f];
		f++;
		for(i=1;i<vec[u].size();i++)
        {
			if(visit[vec[u][i]]==0)
            {
				path[vec[u][i]]=(u+vec[u][i])^path[u];
				s^=path[vec[u][i]];
				visit[vec[u][i]]=1;
				ct++;
				r++;
				q[r]=vec[u][i];
			}
		}
	}
	cout<<s;
 
	return 0;
}