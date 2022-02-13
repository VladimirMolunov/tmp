#include <iostream>
using namespace std;
char leveling(char c)
{
    if (isupper(c))
        return tolower(c);
    return c;
}
int main()
{
    char c;
    do
    {
        cin.get(c);
        cout <<leveling(c);
    }
    while (c != '\n');
    cout <<endl;
    return 0;
}
