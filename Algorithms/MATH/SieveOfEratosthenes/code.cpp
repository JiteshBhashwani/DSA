#include <vector>
int countPrimes(int n)
{
	std::vector<bool> sieve(n+1,true);
	sieve[0]=sieve[1]=false;
	int count{0};
	for(int i = 0;i < n;i++){
		if(sieve[i]){
			count++;
			for(int j = i+i;j < n;j+=i){
				sieve[j] = false;
			}
		}
	}
	return count;
}