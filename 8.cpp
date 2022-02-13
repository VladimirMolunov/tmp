#include <iostream>
using namespace std;
bool is_a_number(char c)
{
    return isdigit(c);
}
int main()
    {
    char c;
    unsigned int sum = 0;
    do
    {
        cin >>c;
        if (is_a_number(c))
        sum += c - '0';
    }
    while (c != '$');
    cout <<sum <<endl;
    return 0;
}
