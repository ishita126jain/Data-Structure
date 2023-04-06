class Solution {
public:
    string freqAlphabets(string s) {
        string ans;
        int n=s.size();
        int i=0;
       while(i!=n){
           
            if( n-i>=3 && s[i+2]=='#'){
                string temp;
                temp.push_back(s[i]);
                temp.push_back(s[i+1]);
                

                int a=stoi(temp);
                cout<<i<<" ";
                ans.push_back(96+a);
                i=i+3;
            }
            else{
                string temp;
                temp.push_back(s[i]);
            
               int a=stoi(temp);
               cout<<i<<" ";
                ans.push_back(96+a);
            
                i++;
            }
          
        }
        return ans;
    }
};
