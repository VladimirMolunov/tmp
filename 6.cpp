#include <iostream>
using namespace std;
unsigned long long int fibonacci(unsigned int n)
{
    switch (n)
    {
        case 1:
            return 0;
        case 2:
            return 1;
        default:
            return (fibonacci(n-1) + fibonacci(n-2));
    }
}
int main()
{
    unsigned int n;
    cin >> n;
    cout << fibonacci(n) <<endl;
    return 0;
}
