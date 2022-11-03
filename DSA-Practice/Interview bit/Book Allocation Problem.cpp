bool possible(vector<int> &A,int students,int mid)
{
    int studentCount{1};
    int pageCount{0};
    for(int i = 0;i < A.size();i++)
    {
        if(pageCount+A[i] <= mid)
        {
            pageCount+=A[i];
        }
        else
        {
            studentCount++;
            pageCount = A[i];
            if(studentCount > students || pageCount > mid) return 0;
        }
    }
    return true;
}


int Solution::books(vector<int> &A, int B) {
    if(B>A.size()) return -1;
    int start = 0;
    int end = 0;
    int answer = -1;
    for(auto&&i:A)end+=i;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(possible(A,B,mid))
        {
            answer = mid;
            end = mid-1;
        }
        else start = mid + 1;
    }
    return answer;
}
