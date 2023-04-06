class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merge="";
        int n=word1.size();
        int m=word2.size();
        int i=0,j=0;
        if(n<m){
            while(n!=0){
            merge.push_back(word1[i]);
             merge.push_back(word2[i]);
            n--;
            i++;
        }
            n=word1.size();
            m=word2.size();
            int a=m-n;
            while(a--){
               merge.push_back(word2[i]);  
                i++;
            }
        }
        else if(n>m){
              while(m!=0){
            merge.push_back(word1[i]);
             merge.push_back(word2[i]);
            m--;
            i++;
        }
            n=word1.size();
            m=word2.size();
            int a=n-m;
            while(a--){
               merge.push_back(word1[i]);  
                i++;
            }
        }
        else if(n==m){
            while(m!=0){
            merge.push_back(word1[i]);
            merge.push_back(word2[i]);
            m--;
            i++;
        }
        }
              
        return merge;
    }
};
