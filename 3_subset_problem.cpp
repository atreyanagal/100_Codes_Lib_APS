//Subset Sum using DP
/*
Enter length of a 1D array: 4
Enter the elements of an array:
2 3 5 7
Enter the subset sum: 9
Enteries of the DP table:
1 0 0 0 0 0 0 0 0 0 
1 0 1 0 0 0 0 0 0 0 
1 0 1 1 0 1 0 0 0 0 
1 0 1 1 0 1 0 1 1 0 
1 0 1 1 0 1 0 1 1 1 

Value of last entry of DP table: 1
Sum equal to 9 exist
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int SS[1000][1000],i,n,j,sum;

	cout<<"Enter length of a 1D array: ";
	
	cin>>n;

	int a[n];

	cout<<"Enter the elements of an array:"<<endl;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	cout<<"Enter the subset sum: ";

	cin>>sum;

	for(i=1;i<=sum;i++)
	{
		SS[0][i]=0;
	}

	for(i=0;i<=n;i++)
	{
		SS[i][0]=1;
	}

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=sum;j++)
		{
			if(SS[i-1][j]==1)
			{
				SS[i][j]=1;
			}

			else if(a[i-1]>j)
			{
				SS[i][j]=0;
			}

			else
			{
				SS[i][j]=SS[i-1][j-a[i-1]];
			}
		}
	}

	cout<<"Enteries of the DP table:"<<endl;
	
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=sum;j++)
		{
			cout<<SS[i][j]<<" ";
		}

		cout<<endl;
	}

	cout<<endl;
	
	cout<<"Value of last entry of DP table: "<<SS[n][sum]<<endl; 

	if(SS[n][sum]==1)
	{
		cout<<"Sum equal to "<<sum<<" exist";
	}

	else
	{
		cout<<"Sum equal to "<<sum<<" does not exist";	
	}

	return 0;
}