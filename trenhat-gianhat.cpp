#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define read() ios::sync_with_stdio(false); cin.tie(nullptr); freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 

int cnt = 0;
struct person{
    string name;
    int a[3];
};

void nhap(struct person &x){
    cin >> x.name;
    cin.ignore();
    string x1, y;
    getline(cin, x1);
    stringstream ss(x1);
    int index = 0;
    while(getline(ss, y, '/')){
        x.a[index++] = stoi(y);
    }
}

bool cmp(struct person a1, struct person b){
    if(a1.a[2] != b.a[2]) return a1.a[2] < b.a[2];
    else{
        if(a1.a[1] != b.a[1]) return a1.a[1] < b.a[1];
        else{
            if(a1.a[0] != b.a[0]) return a1.a[0] < b.a[0];
        }
    }
    return 0;
}

int main(){
    //read();
    int t; cin >> t; cin.ignore();
    struct person a[t];
    f0(i, t) nhap(a[i]);
    sort(a, a + t, cmp);
    cout << a[t- 1].name << el << a[0].name;
}