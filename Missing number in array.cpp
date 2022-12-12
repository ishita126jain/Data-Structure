// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
         int len = array.size();
    
    
    if(len==1)
    {
        if(array[0] >=2)
            return 1; 
        else
            return 1+array[0];
    }
    
    sort(array.begin(), array.end());

    for(int i =0 ; i  < len; i++)
    {
        if(array[i] != i+1)
        {
            i+=1;
            return  i; 
        }
    }
    return (array[len-1]+1);
    }
};
