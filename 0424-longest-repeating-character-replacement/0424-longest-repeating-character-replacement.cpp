class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0, maxLen=INT_MIN, maxFreq=INT_MIN;
        unordered_map<int,int>mp;
        while(r<s.length()){
            mp[s[r]-'A']++;
            maxFreq=max(maxFreq,mp[s[r]-'A']);
            if((r-l+1)-(maxFreq )>k){
                mp[s[l]-'A']--;
                l++;
            }
            maxLen=max(maxLen,r-l+1);
            r++;
        }
        return maxLen;
    }
};