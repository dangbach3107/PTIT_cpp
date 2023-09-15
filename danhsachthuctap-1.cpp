#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define read() ios::sync_with_stdio(false); cin.tie(nullptr); freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 

typedef struct SV{
    int stt;
    string msv, ten, lop, mail, dn;
}SV;

int cnt = 0;

void nhap(SV &x){
    if(!cnt) cin.ignore();
    x.stt = ++cnt;
    getline(cin, x.msv); getline(cin, x.ten);getline(cin, x.lop);getline(cin, x.mail);getline(cin, x.dn);
}

bool cmp(SV x, SV y){
    return x.ten < y.ten;
}

int main(){
    //read();
    int n; cin >> n;
    SV a[n];
    f0(i, n) nhap(a[i]);
    int t; cin >> t; cin.ignore();
    sort(a, a + n, cmp);
    while(t--){
        string s;
        getline(cin, s);
        f0(i, n){
            if(a[i].dn == s){
                cout <<a[i].stt << " " << a[i].msv << " " << a[i].ten << " " << a[i].lop << " " << a[i].mail << " " << a[i].dn << el;
            }
        }
    }
}