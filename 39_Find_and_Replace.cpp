//https://codeforces.com/contest/1807/problem/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;

    while(testcase--)
    {
        int num,flag=0;

        cin>>num;

        string str;
        cin>>str;

        vector<int>vec(26,-1);

        for(int i=0;i<num;i++)
        {
            if(vec[str[i]-'a']==-1)
                vec[str[i]-'a']=(i%2);

            else
            {
                if((i%2) != vec[str[i]-'a'])
                {
                    flag=1;
                    break;
                }
            }
        }

        if(flag)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}