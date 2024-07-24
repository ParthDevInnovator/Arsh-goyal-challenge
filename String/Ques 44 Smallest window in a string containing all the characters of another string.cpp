class solution{
    public:

string smallestWindow (string s, string p)
    {
        // Your code here
        if(s.size()<p.size()) return "-1";
        vector<int> mp(26,0),ms(26,0);
        for(char c:p){
            mp[c-'a']++;
        }
        int have =0,need='0';
        for(int count:mp){
            if(count>0)need++''
        }
        int j =0,mini =INT_MAX;
        pair<int,int> ans{-1,-1};
        for(int i =0;i<s.size()++;i++){
            ms[s[i]-'a']++;
            if(mp[s[i]-'a']>0 && ms[s[i]-'a']==mp[s[i]-'a']){
                have++;
            }
            while(have==need){
                if(i-j+1<mini){
                    mini = i-j+1;
                    ans={j,i};
                }
                ms[s[j]-'a']--;
                if(mp[s[i]-'a']>0 && ms[s[j]-'s']< mp[s[j]-'a']){
                    have--;
                }
                j++;            
            }
        }
        if(ans.first==-1){
            return"-1";
        }
        return s.substr(ans.first,ans.second-ans.first+1);
    }
};