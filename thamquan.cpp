#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("thamquan.inp", "r", stdin);
	freopen("thamquan.out", "w", stdout);
	int t, a, b, tong = 0, phat = 20, dongia1 = 0, dongia2 = 0;
	cin >> t;
	cin >> a;
	cin >> b;
	if (t == 7 || t == 1){
		dongia1 = 10;
		dongia2 = 15;
		if (a < 12){
			if (b < 12){
				tong = (b - a)*dongia1;
			}
			if (b < 18 && b > 12){
				tong = (12 - a)*dongia1 + (b - 12)*dongia2;
			}
			if (b > 18){
				tong = (12 - a)*dongia1 + 6*dongia2 + (b - 18)*phat;
			}
		}
		if (a > 12 && a < 18){
			if (b > 12 && b < 18){
				tong = (b - a)*dongia2;
			}
			if (b > 18){
				tong = (18 - a)*dongia2 + (b - 18)*phat;
			}
		}
		
	}
	else{
		dongia1 = 6;
		dongia2 = 10;
			if (a < 12){
			if (b < 12){
				tong = (b - a)*dongia1;
			}
			if (b < 18 && b > 12){
				tong = (12 - a)*dongia1 + (b - 12)*dongia2;
			}
			if (b > 18){
				tong = (12 - a)*dongia1 + 6*dongia2 + (b - 18)*phat;
			}
		}
		if (a > 12 && a < 18){
			if (b > 12 && b < 18){
				tong = (b - a)*dongia2;
			}
			if (b > 18){
				tong = (18 - a)*dongia2 + (b - 18)*phat;
			}
		}
	}	
	cout<<tong;
}
