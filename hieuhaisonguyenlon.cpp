#include<bits/stdc++.h>
using namespace std;
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 
#define ll long long int

void hieu(string a, string b){
    int nho = 0;
    string c = "";
    if(a.size() < b.size() ||(a.size() == b.size() && a < b)) swap(a,b);
    while(a.size() != b.size()) b.insert(0, "0");
    for(int i = a.size() - 1; i >=0; i --){
        int x = a[i] - b [i] - nho;
        if(x < 0){
            x += 10;
            nho= 1;
        }
        else nho = 0;
        c.pb(to_string(x)[0]);
    }
    for(int i = c.size() - 1; i >= 0; i--) cout << c[i];
    cout << el;
}

int main(){
    //read;
    int t; cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        hieu(a, b);
    }
}