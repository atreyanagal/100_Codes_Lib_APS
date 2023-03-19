//https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    static bool comp(Item i1,Item i2){
        double r1=(double)i1.value/(double)i1.weight;
        double r2=(double)i2.value/(double)i2.weight;
        return r1>r2;
    }
    double fractionalKnapsack(int w, Item arr[], int n)
    {
        sort(arr,arr+n,comp);
        double ans=0.0;
        for(int i=0;i<n;i++){
            if(arr[i].weight<=w){
                w=w-arr[i].weight;
                ans=ans+arr[i].value;  
            }
            else{
               ans=ans+(double)w*((double)arr[i].value/(double)arr[i].weight); 
               break;
            }
        }
        return ans;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends