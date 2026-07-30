class Solution {
public:
    bool isVowel(char ch){
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }
    int maxVowels(string s, int k) {
        int freq[26]={0};
        int left=0;
        int vowelCount=0;
        int ans=0;
        for(int right=0;right<s.size();right++){
            if(isVowel(s[right]))
                vowelCount++;
            if(right-left+1>k){
                if(isVowel(s[left]))
                    vowelCount--;
                left++;
            }
            if(right-left+1==k){
                ans=max(ans,vowelCount);
            }
        }
        return ans;
    }
};