long long int PowMod(long long int x,long long int n,long long int M)
{
    long long answer = 1;
    while(n){
        answer = ((n&1)? ((answer%M) * 1ll * (x%M)) % M :answer);
        x = ((x%M) * (x%M))%M;
        n = n >> 1;
    }
    return answer;
}