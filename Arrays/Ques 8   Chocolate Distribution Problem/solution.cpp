       class solution{
        public:
        long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        long long ans = INT_MAX;
        sort(a.begin(), a.end());
        int i=0; int j = m-1;
        
        while(j<n){
            long long curr= a[j]-a[i];
            ans = min(ans,curr);
            j++;i++;
        }
        return ans;
        
    }   
};