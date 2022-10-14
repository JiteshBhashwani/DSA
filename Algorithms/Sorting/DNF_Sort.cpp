void swap(int &a, int &b) // helper function
{
    int temp = a;
    b = a;
    a = temp;
}
void sort012(int a[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        // checking if element is 0
        if (a[mid] == 0)
            swap(a[low++], a[mid++]);
        // checking if element is 2
        else if (a[mid] == 2)
            swap(a[high--], a[mid]);
        // since we only have three unique values
        // we don't necessarily have to check for mid is 1 or not
        else
            mid++;
    }
}
