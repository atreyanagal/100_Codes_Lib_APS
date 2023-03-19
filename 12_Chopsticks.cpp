//https://www.codechef.com/problems/TACHSTCK

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	long long int n,m,i,count=0;
	
	cin>>n>>m;
	
	long long int a[n],b;
	
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	
	sort(a,a+n);
	
	for(i=0;i<n-1;i++)
	{
	    b=a[i+1]-a[i];
	    
	    if(b<=m)
	    {
	        count++;
	        i++;
	    }
	    
	}
	
	cout<<count;
	
	return 0;
}
