//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/special-subarray-3-4de176ca/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
 
    cin.tie(NULL);
    
	int tc,n,i,j;
 
	cin>>tc;
 
	while(tc--)
	{
		cin>>n;
 
		long long int x,s,res=0;
 
		vector<long long int> v(n);
 
		for(i=0;i<n;i++)
			cin>>v[i];
 
		for(i=0;i<n;i++)
		{
			x=0;
            s=0;
 
			for(j=0;j<n-i;j++)
			{
				x=x^v[i+j];
				s=s+v[i+j];
 
				if(s!=x)
                {
                    break;
                }
 
				res++;
			}
		}
 
		cout<<res<<endl;
	}
 
    return 0;
}