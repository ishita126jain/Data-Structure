class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>mp;
        int maxi=INT_MIN;
        for(int i=lowLimit;i<=highLimit;i++){
            int sum=0,temp=i;
            while(temp>0){
                sum+=temp%10;
                temp=temp/10;
            }
            mp[sum]++;
            maxi=max(maxi,mp[sum]);
        }
        return maxi;
    }
};
