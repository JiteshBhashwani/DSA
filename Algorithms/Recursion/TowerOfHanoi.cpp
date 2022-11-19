#include <iostream>
using namespace std;
void ToH(int N,char from,char to,char Aux){
    if(!N)return;
    ToH(N-1,from,Aux,to);
    cout << "Disk " << N << "moved from " << from << " to " << to << endl;
    ToH(N-1,Aux,to,from);
}
int main() {
	int x;cin>>x;
	ToH(x,'A','C','B');
	return 0;
}
