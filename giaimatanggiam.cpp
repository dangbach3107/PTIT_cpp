#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define read() ifstream cin; ofstream cout ; cin.open("input.txt"); cout.open("output.txt");

int main(){
    read();
    int t; cin >> t;
	while (t--) {
		string s; cin >> s;
        vector<int> v;
        int index = 0;
        int num = 3;
        if(s[0] == 'I'){
            v.pb(1); v.pb(2); index = 1;
        }
        else {v.pb(2); v.pb(1); index = 0;}
        for(int i = 1; i < s.size() ; i++){
            if(s[i] == 'I'){
                v.pb(num++);
                index = i + 1;
            }
            else{
                v.pb(v[i]);
                for(int j = index ; j <= i; j++) v[j]++;
                num++;
            }
        }
        for(auto x : v) cout << x;
        cout << el;
	}
}