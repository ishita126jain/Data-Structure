class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(auto value:students){
            q.push(value);
        }
        for(int i=0;i<sandwiches.size();i++){
            int a=0;
            int n=q.size();
            while(1){
                if(sandwiches[i]==q.front()){
                    q.pop();
                    break;
                }
                else{
                    q.push(q.front());
                    q.pop();
                    a++;
                    if(a==n){
                        return a;
                    }
                }
            }
        }
        return q.size();
    }
};
