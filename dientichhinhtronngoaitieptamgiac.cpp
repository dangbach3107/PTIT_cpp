#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define read() ios::sync_with_stdio(false); cin.tie(nullptr); \
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 
#define PI 3.141592653589793238

int main() {
	int t; cin >> t;
	while (t--) {
		double a, b, c, d, e, f;
		cin >> a >> b >> c >> d >> e >> f;
		double x = sqrt((a - c) * (a - c) + (b - d) * (b - d));
		double y = sqrt((e - c) * (e - c) + (f - d) * (f - d));
		double z = sqrt((e - a) * (e - a) + (f - b) * (f - b));
		if (x + y <= z || x + z <= y || z + y <= x)cout << "INVALID\n";
		else {
			double s = sqrt((x + y + z) * (x + y - z) * (y + z - x) * (z + x - y)) * 1.0 / 4;
			double r = x * y * z * 1.0 / (4 * s);
			cout << fixed << setprecision(3) <<(double) PI * r * r << endl;
		}
	}
}