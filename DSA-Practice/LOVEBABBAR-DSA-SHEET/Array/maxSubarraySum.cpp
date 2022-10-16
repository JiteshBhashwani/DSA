    int max(int a,int b)//helper
    {
        return ((a>b)?a:b);
    }
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int sum = arr[0];
        int max_sum = sum;
        for(int i = 1;i < n;i++)
        {
            if(sum < 0) sum = arr[i];
            else sum += arr[i];
            max_sum = max(max_sum,sum);
        }
        return max_sum;
    }