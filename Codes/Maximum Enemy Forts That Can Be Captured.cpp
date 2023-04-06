class Solution {
public:
    int captureForts(vector<int>& forts) {
        int count=0;
        int maxcount=0;
    
        for(int i=0;i<forts.size();i++)
        {
            if(forts[i]==1)
            {
                for(int j=i-1;j>=0;j--)
                {
                    if(forts[j]==0)
                    {
                        count++;
                    }
                    else if(forts[j]==-1)
                    {
                        maxcount = max(maxcount,count);
                        count=0;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                count=0;
                for(int j=i+1;j<forts.size();j++)
                {
                    if(forts[j]==0)
                    {
                        count++;
                    }
                    else if(forts[j]==-1)
                    {
                        maxcount = max(maxcount,count);
                        count=0;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        return maxcount;
    }
};
