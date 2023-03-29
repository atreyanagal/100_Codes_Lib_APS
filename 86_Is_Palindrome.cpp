//https://www.hackerearth.com/problem/algorithm/is-palindrome-2-eb50514b/

#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
	  ios_base::sync_with_stdio(0);
    cin.tie(NULL);
 
	string str;
	cin >> str;
	int i,b;
	cin >> b;
 
	char arr[str.length()];
 
	for(i=0;i<str.length();i++)
  {
    	arr[i]=str[i];
  }
	
	for(int j=0;j<b;j++)
	{
		int left,right,f;
 
		cin>>f;
 
		if(f==1)
		{
			char c;
 
			cin>>left>>right>>c;
 
			for(i=left-1;i<=right-1;i++)
      {
				arr[i]=c;
      }
 
		}
 
		else
		{
			cin>>left>>right;
			int bit_vec=0, m=0;
 
			for(i=left-1;i<right;i++)
			{
				int x=arr[i]-'a';
				m=1<<x;		
				bit_vec=bit_vec^m;
			}
		
			if((bit_vec&(bit_vec-1))==0)
      {
				cout<<"Yes"<<endl;
      }
 
			else
      {
				cout<<"No"<<endl;
      }
 
		}
	}
	return 0;
}