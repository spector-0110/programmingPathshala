class Solution {
public:
    vector<int> searchRange(vector<int>& a, int t) {
        int n=a.size(),l1=0,r1=n-1,l2=0,r2=n-1,a1=-1,a2=-1;

        while(l1<=r1){
            int m=l1+(r1-l1)/2;
            if(a[m]==t) a1=m,r1=m-1;
            else if(a[m]<t) l1=m+1;
            else r1=m-1;
        }
        while(l2<=r2){
            int m=l2+(r2-l2)/2;
            if(a[m]==t) a2=m,l2=m+1;
            else if(a[m]<t) l2=m+1;
            else r2=m-1;
        }
        if(a1!=-1) return {a1,a2};
        return {-1,-1};
    }
};