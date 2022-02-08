#include <iostream>
using namespace std;
unsigned int get_a_hexadecimal()
{
    char c;
    int n=0;
    bool legit=true;
    do
    {
        cin >> c;
        if (isdigit(c))
        {
            n += c;
            n *= 16;
        }
        else
        {
            switch (c)
            {
                case 'A':
                    n += 10;
                    n *= 16;
                    break;
                case 'B':
                    n += 11;
                    n *= 16;
                    break;
                case 'C':
                    n += 12;
                    n *= 16;
                    break;
                case 'D':
                    n += 13;
                    n *= 16;
                    break;
                case 'E':
                    n += 14;
                    n *= 16;
                    break;
                case 'F':
                    n += 15;
                    n *= 16;
                    break;
                case ' ':
                    break;
                case '\n':
                    break;
                default:
                    legit = false;
            }
        }
    }
    while(c != ' ' && c != '\n');
    if (legit)
        return n;
    else
        return 0;
}
int main()
{
    cout <<get_a_hexadecimal() <<endl;
    return 0;
}
