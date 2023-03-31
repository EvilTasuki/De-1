#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("tinhtong.inp", "r", stdin);
	freopen("tinhtong.out", "w", stdout);
	int n, s=0;
	cin >> n;
	for(int i = 1; i <= n-1; i++){
		if (i% 2 == 0){
			s = s + i;
		}
	}
	cout<<s;
}
