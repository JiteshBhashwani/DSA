int indexOf(int arr[],int size,int target)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == target) return i;
    }
    return -1;
}//function will return -1 if target not present