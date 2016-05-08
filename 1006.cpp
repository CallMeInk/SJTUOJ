# include<iostream>
using namespace std;
 
int main(){
	int a[1000001];
	int n;
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i];
	int maxh=a[1];
	int max=-1000;
	for(int i=2;i<=n;i++){
		if (maxh<0) {
                        if (maxh+a[i]>max) max=maxh+a[i];
                        maxh=a[i];}
		else {
				maxh += a[i];
		      	if (maxh>max) max=maxh;
				}
	}
	if (max>0) cout << max;
	else cout << "Game Over" << endl;
	return 0;
}
