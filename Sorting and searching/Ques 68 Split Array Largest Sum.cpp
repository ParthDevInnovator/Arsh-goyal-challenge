class Solution {
public:
    bool solve(vector<int>& a,int mid,int n, int m){
        int sc=1;
        long long sum=0;
        for(int i=0;i<n;i++){
            if(sum+a[i]>mid){
                sc++;
                sum=a[i];
                if(sc>m || a[i]>mid) return false;
            }
            else{
                sum+=a[i];
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int s=0;
        int e=sum;
        int ans=-1;
        while(s<=e){
            int mid =s+(e-s)/2;
            if(solve(nums,mid,n,k)){
                ans=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ans;
    }
};