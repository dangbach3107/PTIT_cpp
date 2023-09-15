#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define read() ios::sync_with_stdio(false); cin.tie(nullptr); freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 
int cnt = 0;
class GV{
    private:
    string name, mon, mgv, ten;
    public:
    friend istream &operator >> (istream &in, GV &x){
        cnt++;
        if(cnt <= 9) {
            x.mgv = "GV0" + to_string(cnt);
        }
        else {
            x.mgv = "GV" + to_string(cnt);
        }
        getline(in, x.name);
        stringstream ss1(x.name);
        while(ss1 >> x.ten);
        getline(in, x.mon);
        string res = "", a;
        stringstream ss(x.mon);
        while(ss >> a){
            res+= toupper(a[0]);
        }
        x.mon = res; 
        return in;
    }
    friend ostream &operator << (ostream &out, GV x){
        out << x.mgv << ' ' << x.name << " " << x.mon << el ;
        return out;
    }
    friend string get_mon(GV x) {return x.mon;}
};
int main(){
    read();
    int t; cin >> t; cin.ignore();
    GV a[t];
    f0(i, t){
        cin >> a[i];
    }
    int n; cin >> n; cin.ignore();
    while(n--){
        string x, b = "";
        getline(cin, x);
        stringstream ss(x);
        string c;
        while(ss >> c){
            b += toupper(c[0]);
        }
        cout << "DANH SACH GIANG VIEN BO MON " << b << ":\n";
        f0(i, t){
            if(get_mon(a[i]) == b) cout << a[i];
        }
    }
}