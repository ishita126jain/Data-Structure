//User function Template for C++

void rotate(int arr[], int n)
{
   vector<int> v;
   v.push_back(arr[n-1]);
   
   for(int i=0;i<n-1;i++){
       v.push_back(arr[i]);
   }
   
   for(int i=0;i<n;i++){
       arr[i]=v[i];
   }
   
}
