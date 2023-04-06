#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	
	cin>>T;
	while(T--){
	   int N;
	   vector<int> C;
	   cin>>N;
	   for(int i=0;i<N;i++){
	       int a;
	       cin>>a;
	       C.push_back(a);
	   }
	    long long int sum=0;
	    for(int i=0;i<N;i++){
	        sum=(sum+C[i])%998244353;
	    }
	    sum=(sum*(sum-1))%998244353;
	    cout<<sum<<endl;
	   
	   }
	
	return 0;
}
