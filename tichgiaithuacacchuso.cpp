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
    int n; string x;
    cin >> n >> x;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        if(x[i] == '2' || x[i] == '3'|| x[i] == '5'|| x[i] == '7') mp[x[i] - '0']++;
        else if(x[i] == '4'){ mp[2] += 2; mp[3]++;}
        else if(x[i] == '6') {mp[5]++; mp[3]++;}
        else if(x[i] == '8') {mp[7]++; mp[2] += 3;}
        else if(x[i] == '9') {mp[7]++; mp[3]+= 2; mp[2]++;}
    }
    while(mp[7]--) cout << 7;
    while(mp[5]--) cout << 5;
    while(mp[3]--) cout << 3;
    while(mp[2]--) cout << 2;
    cout << el;
}

int main(){
    read2();
    int t; cin >> t;
	while (t--) {
		solve();
	}
}