class Solution {
public:
    bool isSubsequence(string s, string t) {
        int curr1=0;
        int curr2=0;
        while(curr2<t.length() && curr1<s.length()){
            if(s[curr1]==t[curr2]){
                curr1++;
            }
            curr2++;
        }
        if(curr1==s.length())
            return true;
        return false;
    }
};