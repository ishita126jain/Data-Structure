class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        vector<int> v;
        vector<vector<int>> vv;
        for(int i=0;i<restaurants.size();i++){
            vv.push_back({restaurants[i][1], restaurants[i][0], restaurants[i][2], restaurants[i][3], restaurants[i][4]});
        }
        sort(vv.begin(),vv.end());
        if(veganFriendly==1){
           
            for(int i=0;i<vv.size();i++){
                
                    
                 if(vv[i][2]==1 && vv[i][3]<=maxPrice && vv[i][4]<=maxDistance){
                   v.push_back(vv[i][1]);
                 }
            }
           
            }
            else{
               
            for(int i=0;i<vv.size();i++){
                
                    
                 if(vv[i][3]<=maxPrice && vv[i][4]<=maxDistance){
                   v.push_back(vv[i][1]);
                 }
            }
            }
            reverse(v.begin(),v.end());
       return v; 
    }
};
