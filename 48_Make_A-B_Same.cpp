//https://www.codechef.com/problems/MAKE_AB_SAME

	#include <bits/stdc++.h>
	using namespace std;

	int main() 
	{
		int tc,i;

		cin>>tc;

		while(tc--)
		{
			int num;

			cin>>num;

			int x[num],y[num],t=0;

			for(i=0;i<num;i++)
			{
				cin>>x[i];

				if(x[i]==1)
				{
					t++;
				}
			}

			for(int i=0;i<num;i++)
				cin>>y[i];

			int fg=1;

			for(i=0;i<num;i++)
			{
				if(x[i]!=y[i])
				{
					if((x[i]==1) && (y[i]==0))
					{
						fg=0;
						break;
					}

					else
					{
						if((i==num-1)||(i==0))
						{
							fg=0;
							break;
						}

						else
						{
							if(t==0)
							{
								fg=0;
								break;
							}
							else
								x[i]=1;
						}
					}
				}
			}

			for(i=0;i<num;i++)
			{
				if(x[i]!=y[i])
				{
					if((x[i]==1) && (y[i]==0))
					{
						fg=0;
						break;
					}

					else
					{
						if((i==0 )|| (i==num-1))
						{
							fg=0;
							break;
						}

						else
						{
							if((!x[i-1]) && (!x[i+1]))
							{
								fg=0;
								break;
							}

							else
								x[i]=1;
						}
					}
				}
			}

			if(fg)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		return 0;
	}