//Pattern series 1

/*
Output:

1   5
 2 4
  3
 2 4
1   5
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100][100],n,i,j;

    cin>>n;    
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            a[i][j]=i;
            a[i][j]=j; 
        }       
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i==j) || (i+j)==n+1)
            cout<<a[i][j];

            else
            cout<<" ";
        }       
        cout<<endl;
    } 
    return 0;
}