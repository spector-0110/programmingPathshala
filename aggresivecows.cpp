class Solution {
public:

    bool safe(vector<int> &stalls ,int mid,int k){
        int cows=1;
        int lp=stalls[0];
        for(int i=0;i<stalls.size();i++){
            if(stalls[i]-lp >=mid){
                cows++;
                lp=stalls[i];
                if(cows>=k) return true;
            }
        }
        return false;
    }
    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int ans=-1;
        int low=1,high=1e9;
        while(low<=high){
            int mid=(low+high)/2;
            if(safe(stalls,mid,k)){
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }
};