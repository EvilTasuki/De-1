#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("solonmanh.inp", "r", stdin);
	freopen("solonmanh.out", "w", stdout);
	int n, m, ct = 0, s = 0;
	cin >> n;
	cin >> m;

	for(int i = n; i < m; i++){
		for(int j = 1; j < i; j++){
			if (i % j==0){
				s+=j;
			}
		}
		if(s > i){
			ct += 1;
		}
		s = 0;
	}
	cout<<ct;
}
