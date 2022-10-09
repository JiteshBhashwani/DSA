#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin >> str;
    for (size_t i = 0; i < str.size(); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] - 'A' + 'a';
        else str[i] = str[i] - 'a' + 'A';
    }
    cout << str;


return 0;
}