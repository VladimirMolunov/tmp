#include <iostream>
using namespace std;
void binary(unsigned int n)
{
    int d=n%2;
    if (n>0)
        binary(n/2);
    cout << d;
}
int main()
{
    unsigned int n;
    cin >>n;
    binary(n);
    cout <<endl;
    return 0;
}
