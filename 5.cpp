#include <iostream>
using namespace std;
unsigned long long int factorial(unsigned int n)
{
    if (n == 0) return 1;
    return factorial(n-1) * n;
}
int main()
    {
    unsigned int n;
    cin >>n;
    cout << factorial(n) <<endl;
    return 0;
}
