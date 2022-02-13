#include <iostream>
#include <string>
using namespace std;
unsigned int get_a_hexadecimal()
{
    string s;
    char c;
    int i=0, n=0;
    bool legit=true;
    cin >> s;
    int l = s.length();
    for (;i<l;i++)
    {
    	c = s[i];
	    if (isdigit(c))
        {
            n *= 16;
            n += c - '0';
        }
        else
        {
            switch (c)
            {
                case 'A':
            		n *= 16;
                    n += 10;
                    break;
                case 'B':
                    n *= 16;
                    n += 11;
                    break;
                case 'C':
                    n *= 16;
                    n += 12;
                    break;
                case 'D':
                    n += 13;
                    n *= 16;
                    break;
                case 'E':
                    n *= 16;
                    n += 14;
                    break;
                case 'F':
                    n *= 16;
                    n += 15;
                    break;
                default:
                    legit = false;
            }
        }
    }
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
