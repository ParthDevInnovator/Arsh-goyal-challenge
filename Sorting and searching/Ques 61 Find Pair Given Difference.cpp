public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int left =0;
        int right =1;
        while(left<n && right<n){
            int diff = arr[right] - arr[left];
            if(diff==x && left!=right){
                return 1;
                
            }else if(diff<x){
                    right++;
            }else{
                left++;
            }
            if(left==right){
                right++;
            }
        }
        return -1;
    }