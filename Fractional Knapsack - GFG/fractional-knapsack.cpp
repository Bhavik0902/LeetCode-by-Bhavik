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
    bool static comparator(Item arr1, Item arr2) {
        double r1 = (double)arr1.value/(double) arr1.weight;
        double r2 = (double)arr2.value/(double) arr2.weight;
        return r1>r2;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr,arr+n,comparator);
        double value=0;
        
        for(int i=0;i<n;i++) {
            if(W-arr[i].weight>=0) {
                W -= arr[i].weight;
                value += arr[i].value;
            }
            else {
                value += (double)W * (arr[i].value/(double)arr[i].weight);
                break;
            }
        }
        
        return value;
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