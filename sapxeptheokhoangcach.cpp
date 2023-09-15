#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i<= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define MOD 1000000007
#define MAXN 1000005

typedef struct v{
    int value,  abss,stt;
}var;

bool cmp(var a, var b){
    if(a.abss == b.abss) return a.stt < b.stt;
    else return a.abss < b.abss;
}

int main(){
    fast();
    int t;cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        var a[n];
        for(int i = 0; i < n ; i++){
            cin >> a[i].value;
            a[i].abss = abs(a[i].value - x);
            a[i].stt = i;
         }
        sort(a, a + n, cmp);
        for( auto x : a) cout << x.value << " ";
        cout << el;
     }
}