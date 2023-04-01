//https://www.hackerrank.com/contests/array-query-2023/challenges/max-and-a-max

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,i;

    cin>>num;

    vector<long long> prof(num);

    for(i=0;i<num;i++)
        cin>>prof[i];

    long long max_prof = INT_MIN, curr_profit = 0, st_ind = 0, end_ind = 0, curr_st_ind = 0;

    for(i=0;i<num;i++)
    {
        curr_profit =curr_profit+prof[i];

        if(curr_profit > max_prof)
        {
            max_prof = curr_profit;
            st_ind = curr_st_ind;
            end_ind = i;
        }

        if(curr_profit < 0)
        {
            curr_profit = 0;
            curr_st_ind = i+1;
        }
    }

    cout<<max_prof<<endl;

    vector<long long> prof_copy(prof);

    prof_copy.erase(prof_copy.begin()+st_ind,prof_copy.begin()+end_ind+1);

    max_prof = INT_MIN;
    curr_profit = 0;

    if(prof_copy.empty()) 
    { 
        cout << "0\n";
        return 0;
    }
   
    for(i=0;i<prof_copy.size();i++)
    {
        curr_profit += prof_copy[i];

        if(curr_profit > max_prof)
        {
            max_prof = curr_profit;
        }

        if(curr_profit < 0)
        {
            curr_profit = 0;
        }
    }

    cout<<max_prof<<endl;

    return 0;
}