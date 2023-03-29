//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/guess-permutation-2-be0b2b90/

#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
	int i,j,testcase;
    long long n,s;
 
	cin>>testcase;
 
	while(testcase--)
	{
		int f=1;
        
        cin>>n;
 
         long long int arr[n],ms=0,s=0;
 
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
 
			s=s+arr[i];
			ms=ms+(i+1);
 
			if(ms>s)
            {
                f=0;
            }		
		}
 
		if ((f==1)&&(ms==s))
			cout<<"YES"<<endl;
 
		else
			cout<<"NO"<<endl;
	}
 
    return 0;
}