#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios::sync_with_stdio(false); cin.tie(nullptr);
#define read() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

class SV{
    private:
    string msv, name, lop, mail;
    public:
    friend istream &operator >> (istream &in, SV &x){
        getline(in, x.msv);
        getline(in, x.name);
        getline(in, x.lop);
        getline(in, x.mail);
        return in;
    }
    friend ostream &operator << (ostream &out, SV x){
        out << x.msv << ' ' << x.name << " " << x.lop << " " << x.mail << el;
        return out;
    }
    friend string get_lop(SV x){ return x.lop;}
    friend string get_msv(SV x){ return x.msv;}
};

bool cmp(SV a, SV b){
    return get_msv(a) < get_msv(b);
}

int main(){
    fast();
    read();
    int n; cin >> n;
    cin.ignore();
    SV a[n];
    f0(i, n) cin >> a[i];
    int t; cin >> t;
    cin.ignore();
    string x;
    vector <string> v;
    while(t--){
        getline(cin, x);
        v.pb(x);
    }
    for(auto x : v){
        if(x[0] == 'K'){
                cout << "DANH SACH SINH VIEN NGANH KE TOAN:\n";
            for(auto k : a){
                string x1 = get_msv(k);
                string x2 = get_lop(k);
                if(x1[5] == 'K' && x2[0] != 'E') cout << k;
            }
        }
        else if(x[0] == 'C'){
                cout << "DANH SACH SINH VIEN NGANH CONG NGHE THONG TIN:\n";
            for(auto k : a){
                string x1 = get_msv(k);

                string x2 = get_lop(k);
                if(x1[5] == 'C'&& x2[0] != 'E') cout << k;
            }
        }
        else if(x[0] == 'A'){
                cout << "DANH SACH SINH VIEN NGANH AN TOAN THONG TIN:\n";
            for(auto k : a){
                string x1 = get_msv(k);
                string x2 = get_lop(k);
                if(x1[5] == 'A' && x2[0] != 'E') cout << k;
            }
        }
        else if(x[0] == 'V'){

                cout << "DANH SACH SINH VIEN NGANH VIEN THONG:\n";
            for(auto k : a){
                string x1 = get_msv(k);
                if(x1[5] == 'V') cout << k;
            }
        }
        else if(x[0] == 'D'){
                cout << "DANH SACH SINH VIEN NGANH DIEN TU:\n";
            for(auto k : a){
                string x1 = get_msv(k);
                if(x1[5] == 'D') cout << k;
            }
        }
    }
}