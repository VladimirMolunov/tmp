#include <iostream>
using namespace std;
int minus_of_int(int x)
{
    return -1 * x;
}
int main()
{
    int x;
    cin >> x;
    cout << minus_of_int(x) << endl;
    return 0;
}
