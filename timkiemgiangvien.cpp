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
        x.ten = x.name;
        for(auto &x : x.name) x = tolower(x); 
        x.mon = res; 
        return in;
    }
    friend ostream &operator << (ostream &out, GV x){
        out << x.mgv << ' ' << x.ten << " " << x.mon << el ;
        return out;
    }
    friend string get_name(GV x) {return x.name;}
};
int main(){
    //read();
    int t; cin >> t; cin.ignore();
    GV a[t];
    f0(i, t){
        cin >> a[i];
    }
    int n; cin >> n; cin.ignore();
    while (n--) {
		string s; getline(cin, s);
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
		for (int i = 0; i < s.length(); i++)s[i] = tolower(s[i]);
		f0(i, t){
            if(get_name(a[i]).find(s) != -1 ) cout << a[i];
        }
	}
}