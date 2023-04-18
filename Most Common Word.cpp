class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        map<string,int> m;
        
       for(int i = 0; i < paragraph.size();){
            string temp = "";
            while(i < paragraph.size() && isalpha(paragraph[i])) temp.push_back(tolower(paragraph[i++]));
            while(i < paragraph.size() && !isalpha(paragraph[i])) i++;
            m[temp]++;
        }
        for(auto i:banned){
            m[i]=0;
        }
        string ans;
        int maxi = INT_MIN;
        for(auto i:m){
            if(i.second > maxi){
                ans = i.first;
                maxi = i.second;
            }
        }

        return ans;
    }
};
