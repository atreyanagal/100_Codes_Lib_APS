//Rod cutting
//Cutting rods into 2 pieces

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p;

    cin>>n;

    if(n%2==0)
    {
        p=(n/2)*(n/2);
    }

    else
    {
        p=(n/2)*((n/2)+1);
    }

    cout<<p;

    return 0;
}



