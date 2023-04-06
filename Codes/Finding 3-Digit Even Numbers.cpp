class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans;
        vector<int> temp(10,0);
        
       for(int i=0;i<digits.size();i++){
           temp[digits[i]]++;
       }       
        for(int i=100;i<999;i+=2)                   
        {
            int d1=i/100;
            int d2=i/10%10;
            int d3=i%10;
            if(--temp[d1]>=0 & --temp[d2]>=0 & --temp[d3]>=0){
                ans.push_back(i); 
            }
             temp[d1]++;
             temp[d2]++;
             temp[d3]++;                               
        }
        
        return ans;
    }
};
