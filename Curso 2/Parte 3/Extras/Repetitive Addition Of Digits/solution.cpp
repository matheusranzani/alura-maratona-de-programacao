//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long somaDigitos(long long N) {
        long long soma = 0;
        while (N > 0) {
            soma += N % 10;
            N /= 10;
        }
        return soma;
    }

    int singleDigit(long long N)
    {
        if (N >= 10) {
            return singleDigit(somaDigitos(N));
        } else {
            return N;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        int ans  = ob.singleDigit(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends
