class Solution {
public:
    string intToRoman(int num) {
        string s="";
        string str[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int arr[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        for(int i=0;i<13;i++){
            while(num - arr[i]>=0){
                s=s+str[i];
                num=num-arr[i];
            }
            
        }
        return s;
    }
};
