class Solution {
public:
    int getLucky(string s, int k) {
        int sum=0;
            string str="";
           
            for(int i=0;i<s.size();i++){
            int a=s[i]-96;
            
            string temp = to_string(a);
            str=str+temp;
        }
        for(int i=0;i<str.size();i++){
            
           int a= str[i]-48;
            sum = sum+a;
        }
        string st=to_string(sum);
        k=k-1;
        while(k--){
            sum=0;
            for(int i=0;i<st.size();i++){
                 int a=st[i]-48;
                 
                 sum+=a;
            }
           
            st=to_string(sum);
        }
        return sum;
    }
};
