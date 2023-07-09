//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void subSum(vector<int> arr, int start, int n, vector<int>& res,int sum) {
        if(start==n) {
            res.push_back(sum);
            return;
        }
        
        subSum(arr,start+1,n,res,sum);
        subSum(arr,start+1,n,res,sum+arr[start]);
        
        
            
    }
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> res;
        subSum(arr,0,N,res,0);
        return res;
        // Write Your Code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends