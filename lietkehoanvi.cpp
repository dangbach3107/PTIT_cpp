#include<bits/stdc++.h>
using namespace std;
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 
#define ll long long int
using namespace std;

int n, check = 1;vector <int> a(21);

void ktao(){
    cin >> n;  
    f1(i, n) {a[i] = i;}
}

void sinh(){
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1]) i--;
    if(i == 0) {
        check = 0;
        return;
    }
    else{
        int j = n;
        while(a[i] > a[j])j--;
        swap(a[i], a[j]);
            int l = i + 1, r = n;
            while(l < r){
                swap(a[l], a[r]);
                l++; r--;
            }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        ktao();
        check = 1;
        while(check){
            f1(i, n) cout << a[i];
            cout << " ";
            sinh();
        }
        cout << endl;
    }
}