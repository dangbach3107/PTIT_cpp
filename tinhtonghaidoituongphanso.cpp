#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define read() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

class PhanSo{
    private:
    ll tu, mau;
    public:
    PhanSo(ll tu, ll mau){
        this->tu = tu;
        this->mau = mau;
    }
    friend istream &operator >> (istream &in, PhanSo &x){
        in >> x.tu >> x.mau;
        return in;
    } 
    friend ostream &operator << (ostream &out, PhanSo x){
        out << x.tu << '/' << x.mau ;
        return out;
    }
    void rutgon(){
        ll x = __gcd(tu, mau);
        tu /= x;
        mau /= x;
    }
    friend PhanSo operator + (PhanSo a, PhanSo b){
        PhanSo sum(1, 1);
        sum.mau = a.mau * b.mau;
        sum.tu = a.mau * b.tu + a.tu * b.mau;
        sum.rutgon();
        return sum;
    }
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}