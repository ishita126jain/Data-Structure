class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
       stringstream s(sentence);
       string word;
       int count=0;
       int flag=0;
       while(s>>word){
          if(searchWord.size()>word.size()){
              count ++;
              continue;
          }
          
          else if (searchWord.size()<=word.size()){
              count++;
              int a=searchWord.size();
              string s="";
              
              s=word.substr(0,a);
            
              if(searchWord==s ){
                 
                  flag=1;
                  break;
              }
          }
       }
       if(flag==1){
           return count;
       }
       if(flag==0){
           return -1;
       }
       return 0;
    }
};
