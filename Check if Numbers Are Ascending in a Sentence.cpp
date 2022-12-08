class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> v;
        stringstream str(s);
        string word;
        while(str>>word){
            if(word.size()==1 && (word[0]>='0' && word[0]<='9')){
                int temp = stoi(word);
                v.push_back(temp);
            }
            else if(word.size()>1){
                int i;
                for(i=0;i<word.size();i++){
                    if(word[i]>='0' && word[i]<='9'){
                        continue;
                    }
                    else{
                        break;
                    }
                }
                 
                    if(i==word.size()){
                   int temp=stoi(word);
                    v.push_back(temp);
                }
                
            }
        }
        for(int i=1;i<v.size();i++){
            if(v[i]>v[i-1]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
