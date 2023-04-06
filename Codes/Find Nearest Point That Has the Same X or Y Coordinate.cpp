class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
       
        int ans;
         vector<int> vec;
        for(int i=0;i<points.size();i++){
            if(points[i][0]==x || points[i][1]==y){
               int a=abs(x-points[i][0])+abs(y-points[i][1]);
               vec.push_back(a);
            }
            else{
                vec.push_back(-1);
            }
           }
        int mini=INT_MAX;
           for(int i=0;i<vec.size();i++){
               if(vec[i]==-1){
                 
                   continue;
               }
               else{
                  if(mini>vec[i]){
                      mini=vec[i];
                  } 
               }
           }
        for(int i=0;i<vec.size();i++){
            if(vec[i]==mini){
                return i;
            }
        }
        
        
        return -1;
    }
};
