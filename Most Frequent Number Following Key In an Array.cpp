class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        map<int,int> m;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=0;
        }
        for(int i=0;i<nums.size();i++){
            if(i==n-1 && nums[n-1]==key){
                continue;
            }
            if(nums[i]==key){
               m[nums[i+1]]++;
            }

            }
            for(auto i:m){
                cout<<i.first<<" "<<i.second<<endl;
            }
        int maxi=INT_MIN;
        int point=0;
        for(auto i:m){
           if(maxi<i.second){
               maxi=i.second;
               point = i.first;
           }
        }
        return point;
    }
};
