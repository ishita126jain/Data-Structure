class Solution {
public:
    vector<int> temp; 
    Solution(vector<int>& nums) {
       temp = nums;
    }
    
    vector<int> reset() {
        return temp;
    }
    
    vector<int> shuffle() {
        vector<int> v=temp;
        int n= temp.size();
        int size = n;
        for(int i =n-1;i>=0;i--){
            int j = rand()%size;
            swap(v[i],v[j]);
        }
        return v;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
