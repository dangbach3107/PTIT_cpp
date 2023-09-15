#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define read() ios::sync_with_stdio(false); cin.tie(nullptr); freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 

struct time{
    int h, m, s;
};

void nhap(struct time &x){
    cin >> x.h >> x.m >> x.s;
}

bool cmp(struct time x, struct time y){
    if(x.h != y.h) return x.h < y.h;
    else{
        if(x.m != y.m) return x.m < y.m;
        else return x.s < y.s;
    }
}

int main(){
    //read();
    int n ; cin >> n;
    struct time a[n];
    f0(i, n) nhap(a[i]);
    sort(a, a +n, cmp);
    f0(i, n) {
        cout << a[i].h <<" " << a[i].m << " " << a[i].s << el;
    }
}