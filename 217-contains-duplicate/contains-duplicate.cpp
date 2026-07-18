class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            int current=nums[i];
            if(st.find(current)!=st.end())
                return true;
            
            st.insert(current);
        }
        return false;
    }
};