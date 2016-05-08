#include <iostream>

using namespace std;

int a[10][10];

int main()
{
    int t,a[10][10],i,j;
    cin >> t;
    for(int tt=1;tt<=t;tt++)
    {
        bool flag = true;
        for(i=1;i<=9;i++)
            for(j=1;j<=9;j++)
                cin >> a[i][j];
        for(int i=1;i<=9;i++)
        {
            int sum1 = 0,sum2 = 1;
            for(int j=1;j<=9;j++)
            {
                sum1 += a[i][j];
                sum2 *= a[i][j];
            }
            if (sum1 != 45 || sum2 != 362880)
            {
                flag = false;
                break;
            }
        }
        for(int j=1;j<=9;j++)
        {
            int sum1 = 0,sum2 = 1;
            for(int i=1;i<=9;i++)
            {
                sum1 += a[i][j];
                sum2 *= a[i][j];
            }
            if (sum1 != 45 || sum2 != 362880)
            {
                flag = false;
                break;
            }
        }
        for(int i=1;i<=7;i+=3)
            for(int j=1;j<=7;j+=3)
                {
                    int sum1 = 0,sum2 = 1;
                    for (int x=i;x<=i+2;x++)
                        for(int y=j;y<=j+2;y++)
                            {
                                sum1 += a[x][y];
                                sum2 *= a[x][y];
                            }
                    if (sum1 != 45 || sum2 != 362880)
                    {
                        flag = false;
                        break;
                    }
                }
        if (flag) cout << "Right" << endl;
        else cout << "Wrong" << endl;
    }
    return 0;
}
