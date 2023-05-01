class Solution {
public:
    int splitNum(int num) {
        vector<int> v;
        while(num!=0){
            int temp = num%10;
            v.push_back(temp);
            num=num/10;
        }
        sort(v.begin(),v.end());

        int a=0,b=0;
        for(int i=0;i<v.size();i=i+2){
            a = a*10 + v[i];
        }
        for(int i=1;i<v.size();i=i+2){
            b = b*10 + v[i];
        }
        return a+b;
    }
};
