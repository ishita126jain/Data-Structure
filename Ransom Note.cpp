class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       int count1[26];
        int count2[26];
        
        for(int i=0;i<26;i++){
            count1[i]=0;
            count2[i]=0;
        }
        for(int i=0;i<ransomNote.length();i++){
            count1[ransomNote[i]-'a']++;
        }
        for(int i=0;i<magazine.length();i++){
            count2[magazine[i]-'a']++;
        }
         for(int i=0;i<26;i++){
             if(count2[i]<count1[i]){
                 return false;
             }
         }
        return true;
    }
};
