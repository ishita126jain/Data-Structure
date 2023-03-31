class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
         int size = flowerbed.size();
         if(size==1){
             if((flowerbed[0]==0 && n==1) || (flowerbed[0]==1 && n==0) || (flowerbed[0]==0 && n==0)){
                 return true;
             }
             else {
                 return false;
             }
         }
        if(flowerbed[0]==0 && flowerbed[1]==0){
            count++;
            flowerbed[0]=1;
        }
        for(int i=1;i<flowerbed.size()-1;i++){
            if(flowerbed[i-1]==0 && flowerbed[i+1]==0 && flowerbed[i]==0){
                count++;
                flowerbed[i]=1;
            }
        }
       
        if(flowerbed[size-1]==0 && flowerbed[size-2]==0){
            count++;
            //flowerbed[size-1]=1;
        }
       
        if(count >= n){
            return true;
        }
        return false;
    }
};
