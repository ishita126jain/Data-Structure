class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int> even,odd;
        string n = to_string(num);
        for(int i=0;i<n.size();i++){
            if((n[i]-'0')%2==0){
                even.push(n[i]-'0');
            }
            else{
                odd.push(n[i]-'0');
            }
        }
        int ans=0;
        for(int i=0;i<n.size();i++){
            if((n[i]-'0')%2==0){
                ans=ans*10 + even.top();
                even.pop();
            }
            else{
                ans=ans*10 + odd.top();
                odd.pop();
            }
        }
        return ans;
    }
};
