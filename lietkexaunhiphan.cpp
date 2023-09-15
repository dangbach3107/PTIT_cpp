#include<bits/stdc++.h>
using namespace std;
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 
#define ll long long int
using namespace std;

void sum(string &s){
    for(int i = s.size() - 1; i >= 0; i--){
        if(s[i] == '0'){
            s[i] = '1';
            return;
        }
        else{
            s[i] = '0';
        }
    }
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        ll n; cin >> n;
        string s = "";
        ll k = pow(2, n);
        f0(i, n) s += "0";
        f0(i, k){
            cout << s << " ";
            sum(s);
        }
        cout << endl;
    }
    
    return 0;
}
