#include <iostream>
using namespace std;
unsigned long long int nonacci(unsigned int n)
{
    if (n<8)
        return 0;
    if (n==8)
        return 1;
    unsigned long long s=0, i;
    for (i=1; i<10; i++)
        s += nonacci(n-i);
    return s;
}
unsigned int sum_of_numbers(unsigned long long int n)

{

    unsigned int res = 0;

    while (n)

    {

        res += n % 10;

        n /= 10;

    }

    return res;

}


int main()
{

    unsigned int n;

    cin >>n;

    cout <<sum_of_numbers(nonacci(n)) <<endl;
}
