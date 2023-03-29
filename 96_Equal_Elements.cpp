//https://www.codechef.com/START80C/problems/EQUALELE

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t,n,i;
	
	cin>>t;
	
	while(t--)
	{
	    int maxi=0;
	    cin>>n;
	    int a[n];
	     map<int,int> m;
	    
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        
        
        for(auto &it:m)
        {
            if(it.second>maxi)
            {
                maxi=it.second;
            }
        }
        
        cout<<n-maxi<<endl;
	    
	}
	
	return 0;
}
