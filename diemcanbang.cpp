#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

void solve(){
	int sum = 0;
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i]; sum += a[i];
	}
	int index = -1, sum1 = 0;
	for(int i = 0;i < n - 1; i++){
		sum1 += a[i];
		if(sum - a[i + 1] == 2 * sum1) {
			cout << i + 2 << el;
			return;
		}
	}
	cout << -1 << el;
}

int main() {
	int t; cin >> t;
	while(t--){
		solve();
	}
}