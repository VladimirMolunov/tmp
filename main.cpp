#include <iostream>
#include <vector>

using namespace std;


vector<int> fill_random (long n) // Заполняет вектор псевдослучайными числами от 0 до 48
{
    vector<int> v(n);
    long long a=2115712255483007;
    for (int i = 0; i < n; i++)
    {
        v[i] = a % 49;
        a = abs((a / 39) * 41 + a % 31);
    }
    return v;
}

vector<int> cin_vector (long n) // Ввод вектора с клавиатуры
{
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    return v;
}

int mean (vector<int> v) // Среднее арифметическое вектора
{
    int m=0;
    for (int i: v)
    {
        m += i;
    }
    m = m / v.size();
    return m;
}

void otl() // Отладочная функция, не используется в основной программе
{
    int a[49], i=0;
    for (;i<49;i++)
    {
        a[i] = 0;
    }
    vector<int> w(16000);
        w = fill_random(16000);
        for (int j: w)
        {
            a[j] ++;
        }
        for (i=0;i<49;i++)
        {
            cout << i << " - " << a[i] << endl;
        }
}

void print_vector(vector<int> v) // Вывод вектора
{
    for (int i: v)
    {
        cout << i << "; ";
    }
    cout << endl;
}

int main()
{
    long n;
    cin >> n;
    vector<int> v(n);
    v = cin_vector(n);
    int sr = mean(v);
    for (int i=0; i<n; i++)
    {
        if (v[i] > sr) cout << i << " ";
    }
    cout << endl;
    return 0;
}
