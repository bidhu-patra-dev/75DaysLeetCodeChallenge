class Solution {
public:
    string longestPalindrome(string s) {
        int len=s.length(), start=0, maxlen=0;
        if(len<2){
            return s;
        }
        for(int i=0;i<len;i++){
            int l=i, r=i;
            while(l>=0 && r<len && s[l]==s[r]){
                if(r-l+1>maxlen){
                    start=l;
                    maxlen=r-l+1;
                }
                l--;
                r++;
            }
            l=i;
            r=i+1;
            while(l>=0 && r<len && s[l]==s[r]){
                if(r-l+1>maxlen){
                    start=l;
                    maxlen=r-l+1;
                }
                l--;
                r++;
            }
        }
        return s.substr(start,maxlen);
    }
};