class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int write=0;
        while(i<chars.size()){
            int j=i;
            while(j<chars.size() && chars[j]==chars[i]){
                j++;
            }
            int count=j-i;
            chars[write]=chars[i];
            write++;
            if(count>1){
                string cnt=to_string(count);
                for(char c:cnt){
                    chars[write]=c;
                    write++;
                }
            }
            i=j;
        }
        return write;
    }
};