#include<bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[1000000] = { 0 };
		for (int i = 0; i < n; i++)cin >> M[i];
		int k, x; cin >> k >> x;
		int z = lower_bound(M, M + n, x) - M;
		if (M[z] == x) {
			for (int i = z - k / 2; i < z; i++){
			    if(i>=0)
			    cout << M[i] << " ";
			    else cout<<0<<" ";
			}
			for (int i = z+1; i <= z+k/2; i++)
			{
				if (i < n)cout << M[i] << " ";
				else cout << 0 << " ";
			}
		}
		cout << endl;
	}
}