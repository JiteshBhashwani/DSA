#include <iostream>
#include <string>
bool isPrime(long long n)
{
	if (n <= 1)
	{
		return false;
	}
	if (n == 2 || n == 3)
	{
		return true;
	}
	for (int i = 2; i < n; ++i)
	{
		if(n%i == 0) return false;
	}
	return true;
}
long long convert(std::string str)
{
    long long result{0};
    for (size_t i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            int changeCase = ((str[i]-'A')+'a'); 
            result -= changeCase;
        }
        else
        {
            int changeCase = ((str[i]-'a')+'A');
            result += changeCase;
        }
    }
    if(result < 0){result = result*(-1);}
    return result;    
}
int main(){

    std::string str;
    std::cin >> str;
    std::cout << isPrime(convert(str))<< std::endl;   

return 0;
}