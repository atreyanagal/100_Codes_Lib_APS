//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/minimum-score-1528c5c0/

#include<bits/stdc++.h>
using namespace std;
	
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long int i,k,n;
	long long int count_1=0,count_0=0;
 
	cin>>n>>k;
 
	vector<int> a(n);
 
	for(i=0;i<n;i++)
	{
		cin>>a[i];
 
		if(a[i]==1)
		{
			count_1++;
		}
 
		else
		{
			count_0++;
		}
	}
 
	if(count_1==0||count_0==0)
	{
		cout<<"0"<<endl;
 
		for(i=0;i<k-1;i++)
			cout<<i+1<<" "<<i+1<<endl;
 
		cout<<k<<" "<<n<<endl;
	}
	
	else
	{
		count_1=0,count_0=0;
 
		for(i=k-1;i<n;i++)
		{
			if(a[i]==1)
			{
				count_1++;
			}
			
			else
			{
				count_0++;
			}
		}
 
	if(count_1==0||count_0==0)
	{
		cout<<"0"<<endl;
 
		for(i=1;i<k;i++)
			cout<<i<<" "<<i<<endl;
		
		cout<<k<<" "<<n<<endl;
	}
 
	else
	{
		long long int ind=n-1;
		vector<pair<long long int,long long int>> vec(k);
		long long int m=0,i;
		int previous=a[n-1];
 
		for(i=n-1;i>=0 && m<k-1;)
		{
			for(long long int j=i;n-(n-j-1)>=k-m;j--)
			{
				if(a[j]!=previous)
					break;
	
					i--;
			}
	
			previous=a[i];
			vec[m]={i+2,ind+1};
			m++;
			ind=i;
	}
 
		vec[k-1]={1,ind+1};
		
		m++;
 
		count_1=0;
		count_0=0;
 
	for(long long int i=ind;i>=0;i--)
	{
		if(a[i]==1)
		count_1++;
		else
		count_0++;
	}
 
	if(count_1==0||count_0==0)
	{
		cout<<"0"<<endl;
 
		for(long long int i=k-1;i>=0;i--)
		{
			cout<<vec[i].first<<" "<<vec[i].second<<endl;
		}
		
	}
 
	else
	{
		cout<<"1"<<endl;
 
		for(i=1;i<k;i++)
			cout<<i<<" "<<i<<endl;
	
		cout<<k<<" "<<n<<endl;
	}
	}
	}
	
	return 0;
}