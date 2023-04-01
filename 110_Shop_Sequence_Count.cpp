//https://www.hackerrank.com/contests/array-query-2023/challenges/shop-sequence-count

    #include<bits/stdc++.h>
    using namespace std;

    class FTree 
    {
    public:

        FTree(int num):tree(num + 1, 0) 
        {

        }

        void addition(int ind, int val) 
        {
            ind++;

            while (ind<tree.size()) 
            {
                tree[ind]+=val;
                ind=ind+(ind & -ind);
            }
        }

        int query(int ind) 
        {
            int res=0;

            ind++;

            while(ind>0) 
            {
                res=res+tree[ind];
                ind=ind-(ind & -ind);
            }

            return res;
        }

    private:
        vector<int> tree;
    };

    long long count_inv(vector<int>& vec) 
    {
        int num=vec.size();

        vector<int> sorted=vec;

        sort(sorted.begin(), sorted.end());
        
        for (int i = 0; i < num; ++i) 
        {
            vec[i] = lower_bound(sorted.begin(), sorted.end(), vec[i]) - sorted.begin() + 1;
        }

        FTree fenwick_tree(num);

        long long count = 0;

        for (int i = num - 1; i >= 0; --i) 
        {
            count=count+fenwick_tree.query(vec[i] - 1);
            fenwick_tree.addition(vec[i], 1);
        }

        return count;
    }

    int main() 
    {
        int testcase,i,j;

        cin>>testcase;

        for(i = 0; i < testcase; ++i) 
        {
            int num;

            cin >> num;

            vector<int> shop(num);

            for (j = 0; j < num; ++j)
                cin >> shop[j];

            long long count = count_inv(shop);

            cout << count << "\n";

            if (count >= num)
                cout << "YES\n";
            else
                cout << "NO\n";
        }

        return 0;
    }