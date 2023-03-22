//https://www.hackerearth.com/challenges/competitive/march-circuits-23/algorithm/horse-race-122f4ccc/

#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int testcase,i;
	cin>>testcase;
 
	while(testcase--)
    {
		int p,q,r,s,e=0;
 
		cin>>p>>q>>r;
 
		vector<int> vec(q);
 
		for(i=0;i<p;i++)
        {
			cin>>s;
 
			if(s<=q)
            {
				vec[s-1]++;
            }
 
			else
                {
				    e++;
                }
        
		}
 
		sort(vec.begin(),vec.end());
 
		while(r-- && e--)
        {
			vec[0]++;
 
			for(int i=0;i<q-1;i++)
            {
				if(vec[i]>vec[i+1])
                {
					swap(vec[i],vec[i+1]);
                }
 
				else
                {
					break;
                }
			}
		}
 
		while(r--)
        {
			if(abs(vec[0]-vec[q-1])<=1)
            {
				break;
            }
 
			else
            {
				vec[0]++;
				vec[q-1]--;
 
				for(int i=0;i<q-1;i++)
                {
					if(vec[i]>vec[i+1])
                    {
						swap(vec[i],vec[i+1]);
                    }
 
					else
                    {
						break;
                    }
				}
 
				for(int i=q-1;i>=1;i--)
                {
					if(vec[i-1]>vec[i])
                    {
						swap(vec[i],vec[i-1]);
                    }
 
					else
                    {
						break;	
                    }
				}
 
			}
		}
		cout<<vec[0]<<endl;
	}
}