class Solution {
public:
    static bool end(vector<int> &a, vector<int> &b){
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
      sort(points.begin(), points.end(), end);  
      int last = points[0][1];
      int ans=1;
      for(int i=1;i<points.size();i++){
          if(points[i][0]>last){
              ans++;
              last = points[i][1];
          }
      }
      return ans;
    }
};
