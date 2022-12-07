class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a==b){
            return -1;
        }
        vector<int> v1(26);
        vector<int> v2(26);
        for(int i=0;i<a.size();i++){
            v1[a[i]-97]++;
        }
        for(int i=0;i<b.size();i++){
            v2[b[i]-97]++;
        }
        int sum1=0,sum2=0;
        for(int i=0;i<v1.size();i++){
           sum1+=v1[i];
        }
        cout<<endl;
        for(int i=0;i<v2.size();i++){
           sum2+=v2[i];
        }

        return max(sum1,sum2);

    }
};
