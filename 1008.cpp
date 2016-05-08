#include <iostream>
#include <stdio>

using namespace std;

int work();
int main()
{
    int n,i;
    int sy,sm,sd;
    int ey,em,ed;

    for (i=1;i<=n;i++){
        scanf("%d-%d-%d %d-%d-%d",sy,sm,sd,ey,em,ed);
        cout << work(sy,sm,sd,ey,em,ed) << endl;
    }


    return 0;
}
