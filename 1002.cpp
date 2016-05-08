#include<iostream>
using namespace std;

int main()
{
    int n,m,x,y,ans,sum;
    int a[1005][1005],f[1005][1005] ;
    cin >> n >> m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin >> a[i][j];
    cin >> x >> y;

    for (int i=1;i<=n;i++)
        f[0][i] = 0;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            f[i][j] = f[i-1][j] + a[i][j];

    ans = 0;
    for (int i=1;i<=n-x+1;i++)
    {
        sum = 0;
        for (int k=1;k<=y;k++)
            sum += f[i+x-1][k] - f[i-1][k];
        if (sum > ans) ans = sum;
        for (int j=2;j<=m-y+1;j++)
        {
             sum += f[i+x-1][j+y-1]-f[i-1][j+y-1]-(f[i+x-1][j-1]-f[i-1][j-1]);
             //cout << i << ' ' << j << ' ' << sum << endl;
             if (sum > ans) ans = sum;
        }
        //cout << "ans=" << ans << endl;
    }
    cout << ans << endl;
}

