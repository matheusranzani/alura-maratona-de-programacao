//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int binary_search(int arr[], int target, int left, int right) {
      if (left == right) {
        return left;
      }

      int middle = (left + right + 1) / 2;

      if (target >= arr[middle]) {
        return binary_search(arr, target, middle, right);
      } else {
        return binary_search(arr, target, left, middle - 1);
      }
    }

    int findClosest(int arr[], int n, int target)
    {
      arr[n] = 1000000;

      int position = binary_search(arr, target, 0, n - 1);

      if (target - arr[position] < arr[position + 1] - target) {
        return arr[position];
      } else {
        return arr[position + 1];
      }
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,target;
        cin>>n>>target;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(arr,n,target)<<endl;
    }
}

// } Driver Code Ends
