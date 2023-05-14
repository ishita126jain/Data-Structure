class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int sum=0;
        int min_sum=INT_MAX;
        map<string,int> m1,m2,m3;
        

        for(int i=0;i<list1.size();i++){
            m1[list1[i]]=i;
        }
        for(int i=0;i<list2.size();i++){
            m2[list2[i]]=i;
        }

        for(auto i:list1){
            if(m2.find(i)!=m2.end()){
                sum = m1[i] + m2[i];
                m3[i] = sum;
                min_sum = min(sum,min_sum);
            }
            
        }
      vector<string> v;
      for(auto i:m3){
        if(i.second == min_sum){
            v.push_back(i.first);
        }
      }
      return v;
    }
};
