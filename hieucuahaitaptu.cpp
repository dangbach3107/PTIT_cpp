#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

bool check(string s, vector<string> v){
	for(auto x : v){
		if(x == s) return 1;
	}
	return 0;
}

void solve(){
	string s1, s2;
    vector <string> v1, v2, v,v3;

	getline(cin , s1);
	getline(cin, s2);
	stringstream ss1(s1);
	string x1;
	while(ss1 >> x1){
		v1.pb(x1);
	}
	stringstream ss2(s2);
	string x2;
	while(ss2 >> x2){
		v2.pb(x2);
	}
	for(auto x : v1){
		if(!check(x, v2)) {
		    if(check(x, v) == 0){v3.pb(x);
			v.pb(x);}
		  
		 
	}}
    sort(v3.begin(), v3.end());
    for(auto x : v3) {
        cout << x<< " ";
    }
	cout << el;
}

int main() {
    fast();
	int t; cin >> t; cin.ignore();
	while(t--){
		solve();
	}
}