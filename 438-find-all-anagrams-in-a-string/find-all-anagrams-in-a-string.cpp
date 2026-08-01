class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.size() > s.size())
            return {};
        int freq1[26]={0}; //p
        int freq2[26]={0}; //s
        for(char ch:p){
            freq1[ch-'a']++;
        }   
        int left=0;
        vector<int> ans;
        for(int right=0;right<s.size();right++){
            freq2[s[right]-'a']++;
            if(right-left+1>p.size()){
                freq2[s[left]-'a']--;
                left++;
            }
            bool same=true;
            if(right-left+1==p.size()){
                for(int i=0;i<26;i++){
                    if(freq1[i]!=freq2[i]){
                        same=false;
                        break;
                    }
                }
                if(same)
                    ans.push_back(left);
            }
        }
        return ans;
    }
};