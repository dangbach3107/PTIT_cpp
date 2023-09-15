#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

typedef struct ssssss{
	ll tu, mau;
}PhanSo;

ll gcd(ll a, ll b){
	if(b == 0) return a;
	else return gcd(b, a % b);
}

void process(PhanSo A, PhanSo B){
	PhanSo C, D;
	ll x = gcd(A.tu * B.mau + A.mau * B.tu , A.mau*B.mau);
	C.tu = ((A.tu * B.mau + A.mau * B.tu) / x)*((A.tu * B.mau + A.mau * B.tu) / x);
	C.mau = (A.mau*B.mau / x) * (A.mau*B.mau / x);
	cout << C.tu << "/" << C.mau << " ";
	D.tu = A.tu * B.tu * C.tu;
	D.mau = A.mau * B.mau * C.mau;
	x = gcd(D.tu, D.mau);
	D.tu  /= x;
	D.mau /= x;
	cout << D.tu << "/" << D.mau << el;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}