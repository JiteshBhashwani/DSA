
int search01(int arr[], int top, int bot, int target) // recursive approach
{
    if (top > bot) // base condition
        return -1;

    int mid = bot + (top - bot) / 2;
    int midElement = arr[mid];
    
    if (midElement > target)
        return search01(arr, top, mid - 1, target); // recursive call 01
    if (midElement < target)
        return search01(arr, mid + 1, bot, target); // recursive call 02
    else
        return mid;
}
int search02(int arr[], int size, int target) // iterative approach
{
    int top = 0;
    int bot = size - 1;
    while (top <= bot)
    {
        int mid = bot + (top - bot) / 2;
        if (arr[mid] > target)
            bot = mid - 1;
        else if (arr[mid] < target)
            top = mid + 1;
        else
            return mid;
    }
}