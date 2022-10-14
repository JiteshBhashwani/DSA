#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
inline void fast_io();
inline void io_to_file();

pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
    int com = 0;
    int dif = n;
    map<int,int> hash;
    for (size_t i = 0; i < n; i++)
    {
        hash[arr1[i]]++;
    }
    for (size_t i = 0; i < m; i++)
    {
        if(hash.count(arr2[i])) com++;
        else dif++;
        
    }
    return {com,dif};
}

void solution()
{
    int q;cin>>q;
    while (q--)
    {
        int s1;cin>>s1;
        int s2;cin>>s2;
        vector<int>vec1(s1,0);
        vector<int>vec2(s2,0);
        for(int i = 0;i < s1;i++) cin >> vec1[i];
        for(int i = 0;i < s2;i++) cin >> vec2[i];
        
        auto ans = findSimilarity(vec1,vec2,s1,s2);
        cout << ans.first << " " << ans.second << endl;
    }
    
}
/** sample input
4
2 2
1 2
3 4  
2 1
2 3
3
5 3
1 2 3 4 5
4 6 2
1 2
1
3 2
*/
int main()
{
    io_to_file();
    fast_io();
    solution();
    return 0;
}
inline void io_to_file()
{
#ifndef ONLINE_COMPILER
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
inline void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
