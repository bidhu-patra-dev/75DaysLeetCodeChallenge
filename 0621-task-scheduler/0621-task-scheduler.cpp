class Solution {
public:
    int leastInterval(vector<char>& a, int n) {
        int f[26]={0}, mx=0, c=0;
        int s=a.size();
        for(int i=0; i<s; i++) f[a[i]-'A']++;
        for(int i=0; i<26; i++) if(f[i]>mx) mx=f[i];
        for(int i=0; i<26; i++) if(f[i]==mx) c++;
        int ans=(mx-1)*(n+1)+c;
        return ans>s ? ans : s;
    }
};