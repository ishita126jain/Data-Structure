class Solution {
public:
    int countValidWords(string sentence) {
        stringstream s(sentence);
        string word;
        int count=0;
        while(s>>word){
            int flag=0;
            int n=word.size();
            int hyphen_count=0;
            for(int i=0;i<n;i++){
                if(word[i]=='-'){
                    hyphen_count++;
                    if(hyphen_count>1){
                        flag=1;
                        break;
                    }
                }
                if(word[i]>='0' && word[i]<='9'){
                    flag=1;
                    break;
                }
                else if(word[0]=='-' || word[n-1]=='-' || (word[i]=='-' && (word[i+1]=='!' || word[i+1]=='.' || word[i+1]==',' ||  word[i-1]=='!' || word[i-1]=='.' || word[i-1]==','))){
                    flag=1;
                    break;
                }
                else if(i<n-1 && (word[i]=='!' || word[i]=='.' || word[i]==',') ){
                    flag=1;
                    break;
                }
               
            }
            if(flag==0){
                count++;
            }
            cout<<word<<" "<<count<<endl;
            
        }
        return count;
    }
};
