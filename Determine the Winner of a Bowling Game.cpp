class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int score1=0;
        int score2=0;

        int temp1=0,temp2=0;

        for(int i=0;i<player1.size();i++){
            score1 = score1+player1[i];
            score2 = score2+player2[i];

            if(temp1){
                temp1--;
                score1=score1+player1[i];
            }
            if(temp2){
                temp2--;
                score2=score2+player2[i];
            }
            if(player1[i]==10){
                temp1=2;
            }
            if(player2[i]==10){
                temp2=2;
            }
        }
        if(score1>score2){
            return 1;
        }
        else if(score2 > score1){
            return 2;
        }
        return 0;
    }
};
