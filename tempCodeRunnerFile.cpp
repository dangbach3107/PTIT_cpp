#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define read() ios::sync_with_stdio(false); cin.tie(nullptr); freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 

class dn{
    private:
    string id, name;
    int value;
    public:
    friend istream &operator >> (istream &in, dn &x){
        getline(in, x.id); getline(in, x.name); in >> x.value;in.ignore();
        return in;
    }
    friend ostream &operator << (ostream &out, dn x){
        out << x.id << " " << x.name << " " << x.value <<el;
        return out; 
    }
    friend int getvalue (dn x) {
        return x.value;
    }
    friend string getid(dn x){
        return x.id;
    }
};

bool cmp(dn x, dn y){
    if(getvalue(x) == getvalue(y)) return getid(x) < getid(y);
    else return getvalue(x) > getvalue(y);
}

int main(){
    //read();
    int n; cin >> n; cin.ignore();
    dn ds[n];
    f0(i, n) cin >> ds[i];
    sort(ds, ds + n, cmp);
    f0(i,n) {
        cout << ds[i];
    }
}

