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
        s += nonacci(n-i)
    return s;
}
int main()
{
    unsigned int n;
    cin >> n;
    cout << nonacci(n) <<endl;
    return 0;
}
