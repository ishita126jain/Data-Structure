#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	long long int arr[1000001];
	arr[0]=0;
	arr[1]=1;
	for(long long int i=2;i<=1000000;i++){
	    arr[i]=(i*(arr[i-1])%1000000007)%1000000007;
	  
	}
	
	while(t--){
	   int n;
	   vector<long long int> a;
	   cin>>n;
	   for(int i=0;i<n;i++){
	       long long int x;
	       cin>>x;
	       a.push_back(x);
	   }
	   int ans=0;
	   for(int i=0;i<n;i++){
	       ans=(ans+(arr[a[i]])%1000000007)%1000000007;
	   }
	 
	   cout<<ans<<endl;
	   
	}
	return 0;
}
