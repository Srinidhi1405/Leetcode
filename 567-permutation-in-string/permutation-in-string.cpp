class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int freq1[26]={0};
        int freq2[26]={0};
        int left=0;
        if(s1.size()>s2.size())
            return false;
        for(int right=0;right<s1.size();right++){
            freq1[s1[right]-'a']++;
        }
        for(int right=0;right<s2.size();right++){
            freq2[s2[right]-'a']++;
            if(right-left+1>s1.size()){
                freq2[s2[left]-'a']--;
                left++;
            }
            if(right-left+1==s1.size()){
                if(equal(freq1,freq1+26,freq2))
                    return true;
            }

        }
        return false;
    }
};