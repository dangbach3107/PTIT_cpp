#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define read() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

void solve(){
    int cnt = 0, le =0, chan = 0 ;
    string x;
    getline(cin, x);
    stringstream ss(x);
    string s;
    while(ss >> s){
        cnt++;
        int a = s[0] - '0';
        if(a & 1)le++;
        else chan++;
    }
    if((cnt % 2 == 0) && (chan > le)) cout << "YES\n";
    else if((cnt & 1) && (le > chan)) cout << "YES\n";
    else cout <<  "NO\n";
}

int main(){
    //read();
    int t; cin >> t; cin.ignore();
	while (t--) {
		solve();
	}
}