#include<bits/stdc++.h>
using namespace std;
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 
#define ll long long int

bool cmp(string a, string b){
    string ab = a + b;
    string ba = b + a;
    return ab > ba;
}

int main(){
    //read;
    int t; cin >> t;
    while(t--){
        int n;
    cin >> n;
    string a[n];
    f0(i, n) cin >> a[i];
    sort(a, a+ n, cmp);
    f0(i, n) cout << a[i] ;
    cout << endl;
    }
}

