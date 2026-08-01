class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        //create freq arrays
        int freq1[26]={0};
        int freq2[26]={0};
        //fill freq1
        for(char ch:s1){
            freq1[ch-'a']++;
        }
        //sliding window
        int left=0;
        for(int right=0;right<s2.size();right++){
            freq2[s2[right]-'a']++;
            if(right-left+1>s1.size()){
                freq2[s2[left]-'a']--;
                left++;
            }
            if(right-left+1==s1.size()){
                bool same= true;
                for(int i=0;i<26;i++){
                    if(freq1[i]!=freq2[i]){
                        same=false;
                        break;
                    }
                }
                if(same)
                    return true;
            }
        }
        return {};
    }
};