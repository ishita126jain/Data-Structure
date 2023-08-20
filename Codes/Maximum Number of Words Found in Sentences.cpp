class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int max_count=0;
        for(int i=0;i<n;i++){
            stringstream s(sentences[i]);
            string word;
            int count=0;
            while(s>>word){
                count++;
            }
            max_count=max(count,max_count);
        }
        return max_count;
    }
};
