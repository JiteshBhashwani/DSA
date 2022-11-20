#include <vector>
void merge(std::vector<int>& vec,int start,int mid,int end){
    std::vector<int> temp(end-start+1,0);
    int i = start;
    int j = mid+1;
    int k = 0;
    while(i <= mid && j <= end){
        if(vec[i] < vec[j]) temp[k++] = vec[i++];
        else if(vec[j] < vec[i]) temp[k++] = vec[j++];
        else {
            temp[k++] = vec[j++];
            temp[k++] = vec[i++];
        }
    }
    while(i <= mid){
        temp[k++] = vec[i++];
    }

    while(j <= end){
        temp[k++] = vec[j++];
    }
    for(auto&& x:temp){
        vec[start++] = x;
    }
}

void sort(std::vector<int>& vec,int start,int end){
    if(start>=end) return;
    int mid = (start+end)/2;
    sort(vec,start,mid);
    sort(vec,mid+1,end);
    merge(vec,start,mid,end);    
}
