class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        map<int,int>mpp;
        int ans=0,sum=0,i;
        for(i=0;i<A.size();i++)
        {
            sum=sum+A[i];
            if(sum==0)
            {
                ans=i+1;
            }
            else
            {
                if(mpp.find(sum)!=mpp.end())
                {
                    ans=max(ans,i-mpp[sum]);
                }
                else
                {
                    mpp[sum]=i;
                }
            }
        }
        return ans;
    }
};
