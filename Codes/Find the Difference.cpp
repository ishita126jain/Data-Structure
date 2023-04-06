class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> v1,v2;
          int n=s.size();
          int m=t.size();
        
        for(int i=0;i<26;i++){
            v1.push_back(0);
            v2.push_back(0);
        }
         for(int i=0;i<n;i++){
            int a=s[i]-'a';
             
             v1[a]++;
        }
          for(int i=0;i<m;i++){
            int a=t[i]-'a';
             
             v2[a]++;
        }
        for(int i=0;i<26;i++){
            if(v1[i]!=v2[i]){
                char ans=97+i;
              
                return ans;
            }
        }
        return 'a';
    }
};
