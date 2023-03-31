#include <bits/stdc++.h>
using namespace std;

bool is_factor(int n){
	for (int i = 2; i <= n - 1; i++){
		if (n % i == 0){
			return false;
		}
		else{
			return true;
		}
	}
}

int main(){
	freopen("nguyento.inp", "r", stdin);
	freopen("nguyento.out", "w", stdout);
	int n, m, ct = 0;
	cin >> n;
	cin >> m;
	for (int i = n; i <= m; i++){
		if(is_factor(i) == true){
			ct += 1;
		}
	}
	cout<<ct;	
}
