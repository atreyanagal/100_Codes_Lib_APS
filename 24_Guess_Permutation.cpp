//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/permutation-swaps-2-01766245/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int i,t,n;
 
    cin>>t;
    
    while(t--)
    {
 
    cin>>n;
 
    int a[n];
 
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int last_ele=0,permutation[n+1];
    
	permutation[0]=0;
 
	for(i=1;i<n+1;i++) 
    {
		last_ele=last_ele+a[i-1];
		permutation[i]=last_ele;
	}
 
	int s_m= *min_element(permutation,permutation+n+1);
 
	unordered_set<int> st;
	int m_x=0;
 
	for(i=0;i<n+1;i++) 
    {
		permutation[i]=permutation[i]+(-s_m)+1;
		m_x=max(m_x,permutation[i]);
		st.insert(permutation[i]);
	}
 
	if((m_x==n+1)&&(st.size()==n+1)) 
    {
		for (i=0;i<n+1;i++) 
        {
			cout<<permutation[i]<<" ";
		}
 
        cout<<endl;
	}
 
	else 
		cout<<"-1"<<endl;
 
    }
 
    return 0;
}