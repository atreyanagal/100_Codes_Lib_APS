//https://www.codechef.com/problems/FIND_X

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int tc;

    cin>>tc;

	while(tc--)
    {
	    ll A,B,C,D;

	    cin>>A>>B>>C>>D;
	    
	    if((A+1)%B == (C+1)%D)
        {
	        cout<<"1"<<endl;
        }

	    else
        {
	        ll pre=A, mod=A%B;
	        
	        A=A-mod;
	        
	        ll lcm=(B*D)/__gcd(B,D);
	        
	        cout<<(lcm+A-pre)<<endl;
	    }
	}
	return 0;
}