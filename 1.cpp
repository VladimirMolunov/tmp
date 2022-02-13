#include <iostream>
using namespace std;
bool is_simple(int n)
{
    int i=2;
    for (; i<=n/2; i++)
        if (n%i == 0)
            return false;
    return true;
}
int main ( ) {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if ( is_simple(i) )
            cout <<i <<' ';
    cout <<endl;
    return 0;
}
