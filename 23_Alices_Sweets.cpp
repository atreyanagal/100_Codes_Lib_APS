//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/alices-sweets-02b1336a/

#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int n,k,i,j;
 
	cin>>n;
 
	int p[n],q[n],r[n];
 
	for(i=0;i<n;i++) 
		cin>>p[i];
 
	sort(p,p+n);
 
	for(i=0;i<n;i++) 
		cin>>q[i];
 
	sort(q,q+n);
 
	for(i=0;i<n;i++) 
		cin>>r[i];
	
	sort(r,r+n);
 
	int d=INT_MAX;
	
	int pn_=0,qn_=0,rn_=0;
 
		i=0,j=0,k=0;
 
	int min_i,max_i;
 
	while((i<n)&&(j<n)&&(k<n))
	{
		min_i=min(p[i],min(q[j],r[k]));
 
		max_i=max(p[i],max(q[j],r[k]));
 
		if(max_i-min_i<d)
		{
			d=max_i-min_i;
			pn_=i,qn_=j,rn_=k;
		}
 
		if(d==0)
		{
			break;
		}
 
		if(p[i]==min_i)
		{
			i++;
		}
			
		else if(q[j]==min_i)
		{
			j++;
		}
			
		else
		{
			k++;
		}
		
	}
	
		cout<<abs(p[pn_]-q[qn_])+abs(p[pn_]-r[rn_])+abs(r[rn_]-q[qn_]);
 
	return 0;
}