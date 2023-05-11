class Solution {
public:
    bool prime(int n){
        if(n<=1){
            return false;
        }
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int num=0;
        for(int i=0;i<nums.size();i++){
            if(prime(nums[i][i])){
                num = max(num,nums[i][i]);
            }
            if(prime(nums[i][nums.size()-i-1])){
                num = max(num,nums[i][nums.size()-i-1]);
            }
        }
        return num;
    }
};
