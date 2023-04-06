class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> s;
        int n=candyType.size();
        for(int i=0;i<n;i++){
            s.insert(candyType[i]);
        }
        int a= s.size();
        int b=n/2;

        if(b==a){
            return a;
        }
        else if(a>b){
            return b;
        }
        else if(a<b){
            return a;
        }
        return -1;
    }
};
