#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<int> p;
        p.push(0);
        
        vector<int> ans(n);
        ans[0] = 1;

        for(int i = 1; i < n; ++i) {
            while(!p.empty() && price[p.top()] <= price[i]) {
                p.pop();
            }

            ans[i] = i - (p.empty() ? -1 : p.top());
            p.push(i);
        }

        return ans;
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
