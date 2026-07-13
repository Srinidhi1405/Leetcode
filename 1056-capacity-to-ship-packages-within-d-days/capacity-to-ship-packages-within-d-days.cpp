#include <numeric>
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int s= *max_element(weights.begin(),weights.end());
        int e=accumulate(weights.begin(),weights.end(),0);
        int ans=e;
        while(s<=e){
            int mid=s+(e-s)/2;
            int capacity=mid;
            int Days=1;
            int currentWt=0;
            for(int package: weights){
                if(currentWt+package>capacity){
                    Days++;
                    currentWt=package;
                } else{
                    currentWt+=package;
                }
            }
            if(Days<=days){
                ans=mid;
                e=mid-1;
            } else{
                s=mid+1;
            }
        }
        return ans;
    }
};