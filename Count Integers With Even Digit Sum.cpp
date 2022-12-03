class Solution {
public:
    int countEven(int num) {
        int count=0;
        for(int i=1;i<=num;i++){
            string s= to_string(i);
            int sum=0;
            for(int i=0;i<s.size();i++){
                int a= s[i]-48;
                sum+=a;
            }
            if(sum%2==0){
                count++;
            }
        }
        return count;
    }
};
