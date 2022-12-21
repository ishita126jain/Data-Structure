class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;
        int temp=num;
        while(temp!=0){
           int x= temp%10;
           v.push_back(x);
           temp=temp/10;
        }
        sort(v.begin(),v.end());

        int new1 = v[0]*10 + v[3];
        int new2 = v[1]*10 + v[2];

        return new1+new2;
    }
};
