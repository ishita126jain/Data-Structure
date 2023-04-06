class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int temp = target-97;
        char ans;
        if(target == 'z'){
            return letters[0];
        }
        vector<int> v;
        for(int i=0;i<letters.size();i++){
            int var = letters[i]-97;
            v.push_back(var);
        }
        sort(v.begin(),v.end());

       for(int i=0;i<letters.size();i++){
           int var = letters[i]-97;
           if(var>temp){
               ans = var+97;
               break;
           }
           if(i==letters.size()-1){
               ans = letters[0];
           }
       }
        return ans;
    }
};
