class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        if(s.length()!=t.length())
            return false;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            mp[ch]++;
        }
        for(int i=t.length()-1;i>=0;i--){
            char ch=t[i];
            mp[ch]--;
        }
        for(auto it: mp){
            if(it.second!=0)
                return false;
        }
        return true;
    }
};