#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

void solve(){
	int n; cin >> n; cin.ignore();
	string s;
	getline(cin, s);
	vector<string> v;
	stringstream ss(s);
	string x;
	while(ss >> x){
		for(auto &k : x) k = tolower(k);
		x[0] = toupper(x[0]);
		v.pb(x);
	}
	if(n == 1){
		cout << v.back() << " ";
		for(int i = 0; i < v.size() - 1; i++) cout << v[i] << " ";
		cout << el; 
	}
	else{
		for(int i = 1; i < v.size(); i++) cout << v[i] << " ";
		cout << v[0] << el;
	}
}

int main() {
    fast();
	int t; cin >> t; cin.ignore();
	while(t--){
		solve();
	}
}