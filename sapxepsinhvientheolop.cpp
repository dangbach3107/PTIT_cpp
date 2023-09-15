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
    if(get_lop(a) == get_lop(b)) return get_msv(a) < get_msv(b);
    else return get_lop(a) < get_lop(b);
}

int main(){
    fast();
    //read();
    int n; cin >> n; cin.ignore();
    SV a[n];
    f0(i, n){
        cin >> a[i];
    }
    sort(a, a + n , cmp);
    f0(i, n){
        cout << a[i];
    }
}