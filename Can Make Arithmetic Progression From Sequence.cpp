class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n=arr.size();
        sort(begin(arr), end(arr));
        int a = arr[1] - arr[0];
        for (int i = 2; i < n ; ++i) {
            if (arr[i] - arr[i - 1] != a) return false;
        }
        return true;
    }
};
