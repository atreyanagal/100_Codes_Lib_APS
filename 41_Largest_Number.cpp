//https://www.hackerearth.com/challenges/competitive/march-circuits-23/algorithm/largest-number-7-eee0b7c3/

#include<bits/stdc++.h>
    using namespace std;
 
    int main()
    {
        string str;
 
        int n;
 
        cin >> str >> n;
 
        stack<char> st;
 
        for(char ch : str)
        {
            while(n > 0 && !st.empty() && st.top() < ch)
            {
                st.pop();
                n--;
            }
 
            st.push(ch);
        }
 
        while(n > 0)
        {
            st.pop();
            n--;
        }
 
        string res = "";
 
        while(!st.empty())
        {
            res += st.top();
            st.pop();
        }
 
        reverse(res.begin(), res.end());
 
        cout << res << endl;
 
        return 0;
    }