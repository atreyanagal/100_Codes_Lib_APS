    //Longest increasing subsequence

    //Sample input: Enter the number of elements: 5
    //Sample input: Enter the elements of an array: 8 1 2 3 0
    //Sample output: Length of Longest increasing subsequence: 3

    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        int n,i,j;

        cout<<"Enter the number of elements: ";
        
        cin>>n;

        int a[n],LIS[n];

        cout<<"Enter the elements of an array: ";

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(i=0;i<n;i++)
        {
            LIS[i]=1;
        }

        for(i=1;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(a[i]>a[j] && (LIS[j]+1) > LIS[i])
                {
                    LIS[i]=LIS[j]+1;
                }
            }
        }

        sort(LIS,LIS+n,greater<int>()); //keep counter for efficiency

        cout<<"Length of Longest increasing subsequence: "<<LIS[0];

        return 0;
    }