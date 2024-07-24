bool isPossible(int arr[],int n,int k,int m, long long mid){
      int studentCount=1;
      int pageSum =0;
      for(int i=0;i<m;i++){
          if(pageSum+arr[i]<=mid){
              pageSum+=arr[i];
          }else{
              studentCount++;
              if(studentCount>m || arr[i]>mid){
                  return false;
              }
              pageSum=arr[i];
          }
      }
      return true;
  }
    // Function to find minimum number of pages.
    long long findPages(int n, int arr[], int m) {
        // code here
        if(n<m){
            return -1;
        }
        long long sum = accumulate(arr,arr+n,0);
        long long start=0;
        long long end =sum;
        long long ans=-1;
        while(start<=end){
            long long mid=start+(end-start)/2;}
            if(isPossible(arr[],n,m,mid)){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
  
  