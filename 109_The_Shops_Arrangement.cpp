//https://www.hackerrank.com/contests/array-query-2023/challenges/the-shops-arrangement

    #include<bits/stdc++.h>
    using namespace std;

    int main() 
    {
        ios_base::sync_with_stdio(false);

        cin.tie(NULL);

        int testcase,i;

        cin>>testcase;

        while(testcase--)
        {
            int num;

            cin>>num;

            vector<int> vec(num);

            for(i=0;i<num;i++)
                cin>>vec[i];
            
            int x,t,a,b,y;

            cin>>x;

            while(x--)
            {
                cin>>t;

                if(t==0)
                {
                    cin>>a>>b>>y;

                    if(a==b)
                    {
                        if(y>1)
                        {
                            cout<<"0"<<"\n";
                        }

                        else
                        {
                            cout<<vec[a-1]<<"\n";
                        }
                    }

                    else if(y>(b-a+1))
                    {
                        cout<<"0"<<"\n";
                    }

                    else
                    {
                            int max_value = *max_element(vec.begin()+a-1,vec.begin()+b),hash[max_value+1] = { 0 };
                            
                            for ( i = a-1; i <b; i++)
                            {
                                hash[vec[i]]++;
                            }
                            
                            int count=0,flag=0;

                            for(i=0;i<=max_value;i++)
                            {
                                while (hash[i]>0)
                                {
                                    count++;

                                    if (count==y)
                                    {
                                        cout<<i<<"\n";
                                        flag=1;
                                        break;
                                    }

                                    hash[i]--;
                                }

                                if(flag==1)
                                {
                                    break;
                                }
                            }
                    }
                }
                else
                {
                    cin>>a>>y;
                    vec[a-1]=y;
                    
                }
            }
            
        }
        return 0;
    }