#include<vector>
int findDuplicate(std::vector<int>& nums) {
    int f = 1;
    int l = nums.size()-1;
    while (f<l)
    {
        int m = (f+l)/2;
        int countLess{0};
        for(auto&&i:nums) 
        {
            if(i<=m)countLess++;
        }
        if(countLess>m)l = m;
        else f = m+1;
    }
    return l;
}