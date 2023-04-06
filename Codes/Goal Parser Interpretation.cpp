class Solution {
public:
    string interpret(string command) {
      string ans;
        int n= command.size();
        int i=0;
        while(i!=n)
       {
            if(command[i]=='G'){
                ans.push_back('G');
            }
            else if(command[i]=='(' && command[i+1]==')'){
                  ans.push_back('o');
            }
            if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==')'){
                  ans.push_back('a');
                  ans.push_back('l');
            }
           i++;
        }
       return ans; 
    }
};
