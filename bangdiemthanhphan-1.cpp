#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define read() ios::sync_with_stdio(false); cin.tie(nullptr); freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 

int cnt = 0;
struct SinhVien{
    string msv, lop, name;
    float d1,d2,d3;
    int stt;
};

void nhap(SinhVien &x){
    if(!cnt) cin.ignore();
    getline(cin, x.msv);
    getline(cin, x.name);
    getline(cin, x.lop);
    cin >> x.d1 >> x.d2 >> x.d3;
    cin.ignore();
    x.stt = ++cnt;
}

void in_ds(SinhVien *ds, int n){
    f0(i, n){
        cout << i + 1 << ' ' << ds[i].msv << " " << ds[i].name << " " << ds[i].lop << " " << fixed <<setprecision(1)<< ds[i].d1 << " " << ds[i].d2 << " " << ds[i].d3 << el;
    }
}

bool cmp(SinhVien a, SinhVien b){
    return a.msv < b.msv;
}

void sap_xep(SinhVien *ds, int n){
    sort(ds, ds + n, cmp);
}

int main(){
    read();
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    delete[] ds;
    return 0;
}