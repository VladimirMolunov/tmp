#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Chel
{
    bool butthurt;
};

void loop(vector<Chel> o)
{
    string s;
    int n, m;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> s;
        if (s == "WORRY_COUNT")
        {
            int c=0;
            for (Chel chel: o)
                if (chel.butthurt == true)
                    c ++;
            cout << c;
        }
        else
        {
            cin >> m;
            if (s == "COME")
                {
                if (m >= 0)
                    for (int j=0; j<m; j++)
                    {
                        Chel chel;
                        chel.butthurt = false;
                        o.push_back(chel);
                    }
                    else
                        for (int j=0; j<-m; j++)
                            o.pop_back();
                }
            else
            if (s == "WORRY")
                o[m].butthurt = true;
            else
            if (s == "QUIET")
                o[m].butthurt = false;
        }
    }
}

int main()
{
    vector<Chel> o(0);
    loop(o);
    return 0;
}
