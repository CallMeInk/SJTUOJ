#include <iostream>

using namespace std;

int main()
{
    int l;
    int a[105][105];
    cin >> l;
    for(int i=1;i<=l;i++)
        for(int j=1;j<=l;j++)
            cin >> a[i][j];
    bool flag = true;
    int ans = 0;
    while (flag)
    {
        flag = false;
        ans++;
        for(int i=1;i<=l;i++)
            for(int j=1;j<=l;j++)
                if (a[i][j] == 1)
                {
                    if (i-1 >=1 && a[i-1][j] == 0) {a[i-1][j] = 3;flag = true;}
                    if (i+1 <=l && a[i+1][j] == 0) {a[i+1][j] = 3;flag = true;}
                    if (j-1 >=1 && a[i][j-1] == 0) {a[i][j-1] = 3;flag = true;}
                    if (j+1 <=l && a[i][j+1] == 0) {a[i][j+1] = 3;flag = true;}
                }
        for(int i=1;i<=l;i++)
            for(int j=1;j<=l;j++)
                if (a[i][j] == 3) a[i][j] = 1;
        //cout << "flag =" << flag << endl;
        //cout << "ans =" << ans <<endl;
        //for(int i=1;i<=l;i++)
        //{
        //    for(int j=1;j<=l;j++) cout << a[i][j] << ' ';
        //    cout << endl;
        //}
    }
    ans--;
    cout << ans << endl;
    return 0;
}
