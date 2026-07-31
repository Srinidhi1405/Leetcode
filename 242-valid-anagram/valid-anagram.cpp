class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        unordered_map<int,int> mp;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            mp[ch]++;
        }
        for(int i=0;i<t.size();i++){
            char ch=t[i];
            mp[ch]--;
        }
        for(auto it:mp){
            if(it.second!=0)
                return false;
        }
        return true;
    }
};