class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
     sort(arr,arr+n);
     for(int i=0;i<n-1;i++){
         int x=arr[i];
         int s=i+1;
         int e=n-1;
         while(s<e){
             if(x+arr[s]+arr[e]==0){
                 return true;
             }
             else if((x+arr[s]+arr[e])<0){
                 s++;
             }
             else{
                 e--;
             }
         }
         
     }
     return false;
        
    }
};
