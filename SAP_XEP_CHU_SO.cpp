#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++) // Sửa thành i <= a thay vì i<= a
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define MOD 1000000007
#define MAXN 1000005

int main(){
    int t; cin >> t;
    while(t--){
        set <int> s;
        int n; cin >> n;
        f0(i, n){
            int tmp; cin >> tmp;
            while(tmp){
                s.insert(tmp % 10);
                tmp /= 10;
            }
        }
        for(auto it = s.begin(); it != s.end(); it++){
            cout << *it << " " ;
        }
        cout << el;
    }
}