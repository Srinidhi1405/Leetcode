class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int e=x;
        long long mid=s+(e-s)/2;
        int ans=0;
        while(s<=e){
            if(x==(mid*mid))
                return mid;
            else if(x>(mid*mid)){
                 s=mid+1;
                 ans=mid;
            }
            else
                e=mid-1;
            mid=s+(e-s)/2;
        }
        return ans;
    }
};