//https://www.codechef.com/problems/CHEFEREN

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t,a,b,c;
	
	cin>>t;
	
	while(t--)
	{
	    int o_count=0,e_count=0;
	    
	    cin>>a>>b>>c;
	    
	    for(int i=1;i<=a;i++)
	    {
	        if(i%2==0)
	        e_count++;
	        
	        else
	        o_count++;
	    }
	    
	    cout<<(e_count*b)+(o_count*c)<<endl;
	    
	}
	
	return 0;
}