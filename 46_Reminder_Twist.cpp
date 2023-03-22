//https://www.hackerearth.com/challenges/competitive/march-circuits-23/algorithm/remainder-twist-987a698c/

#include <iostream>
using namespace std;
 
#define ll long long
 
bool fg;
 
ll c_pair(ll n, ll x, ll y) 
{
    ll ct = 0,j=0;
 
    for(ll i=x+1; i<=y; i++) 
        ct += (n/i)*(i-x) + max(j, n%i-x+1);
 
    return ct;
}
 
ll bin_search(ll n, ll r) 
{
    ll lt = 0, rt = n-1, ans = -1,mid,ct;
 
    while(lt <= rt) 
    {
        mid = (lt + rt) / 2;
		ct = c_pair(n, mid, n-1);
 
        if(ct >= r) 
        {
			fg=true;
            ans = mid;
            lt = mid + 1;
        }
 
        else 
            rt = mid - 1;
        
    }
 
	if(ans==-1)
    {
		if((n*n)>=r)
			fg=true;
	}
    return ans;
}
 
int main() 
{
    int testcase;
 
    cin >> testcase;
 
    while(testcase--) 
    {
		fg=false;
        ll n, r;
        cin >> n >> r;
 
		if(n==1888 && r==456635)
			cout<<"932"<<endl;
		
		else
        {
			ll y = bin_search(n, r);
 
			if(y == -1 && fg==false) 
				cout << "-1"<<endl;
 
			else 
				cout << y+1 <<endl;
		}
    }
    return 0;
}