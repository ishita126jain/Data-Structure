class Solution {
public:
    string reverseStr(string s, int k) {
        int n= s.size();
        int d=2*k;
        string ans;
        if(k>n){
           reverse(s.begin(),s.end());
        }
        else if(n<d && n>=k){
            reverse(s.begin(),s.begin()+k);
        }
        else if(n>=d){
            int i=0;
            while(i<=n){
                if(i+k<=n)
                   reverse(s.begin()+i,s.begin()+i+k);
                else
                    reverse(s.begin()+i,s.end());
                   cout<<i<<" ";
                   i=i+d;
                    
            }
        }
        return s;
    }
};
