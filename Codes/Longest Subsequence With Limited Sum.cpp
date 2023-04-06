class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        int m=queries.size();
        vector<int> v;
        vector<int> answer(m,0);
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            v.push_back(sum);
        }
       
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(v[j]<=queries[i]){
                   answer[i]=j+1;
                }
                else{
                    break;
                }
            }
        }
        return answer;
    }
};
