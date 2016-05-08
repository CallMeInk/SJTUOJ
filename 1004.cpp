#include <iostream>

using namespace std;

int main()
{
    int i,m,t,u,f,d;
    char ch;
    cin >> m >> t >> u >> f >> d;
    cin.get();
    for(i=1;i<=t;i++)
    {
        cin.get(ch);
        cin.get();
        if (ch == 'u' || ch == 'd') m -= (u+d);
        else m -= f + f;
        if (m < 0)
        {
            cout << i - 1 << endl;
            break;
        }
    }
    return 0;
}
