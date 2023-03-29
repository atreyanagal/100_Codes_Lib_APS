//https://www.codechef.com/problems/PCYCLE

#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n,i;
	
	cin>>n;
	
	int a[n+1];
	
	for(i=1;i<=n;i++)
	{
	    cin>>a[i];
	}
	
	vector<int> v(n+1,0); //we can use memset for efficiency
	
	vector<vector<int>> vec;
	
	for(i=1;i<=n;i++)
	{
	    if(v[i]!=1)
	    {
	        vector<int> v1;
	        v1.push_back(i);
	        
	        v[i]=1;
	        
	        int j=i;
	        while(v[a[j]]!=1)
	        {
	            v1.push_back(a[j]);
	            v[a[j]]=1;
	            j=a[j];
	        }
	        
	        v1.push_back(a[j]);
	        
	        vec.push_back(v1);
	    }
	    
	}
	
	cout<<vec.size()<<endl;
	
	for(i=0;i<vec.size();i++)
	{
	    for(int k=0;k<vec[i].size();k++)
	    {
	        cout<<vec[i][k]<<" ";
	    }
	    
	    cout<<endl;
	}
	return 0;
}
