
int firstOc(int arr[],int size,int key)
{
    int answer = -1;
    int f = 0;
    int l = size-1;
    while(f<=l)
    {
        int mid = (f+l)/2;
        int midElement = arr[mid];
        if(midElement < key) f = mid+1;
        else if(midElement > key) l = mid-1;
        else 
        {
            answer = mid;
            l = mid-1;
        }
    }
    return answer;
}
int lastOc(int arr[],int size,int key)
{
    int answer = -1;
    int f = 0;
    int l = size-1;
    while(f<=l)
    {
        int mid = (f+l)/2;
        if(arr[mid] < key) f = mid+1;
        else if(arr[mid] > key)l = mid-1;
        else 
        {
            answer = mid;
            f = mid+1;
        }
    }
    return answer;
}
int countOccurences(int arr[], int n, int X)
{
    int f = firstOc(arr,n,X);
    int l = lastOc(arr,n,X);
    if(f==-1)return 0;
    return l-f+1;
}