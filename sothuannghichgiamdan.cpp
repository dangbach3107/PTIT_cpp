#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define read() ios::sync_with_stdio(false); cin.tie(nullptr); \
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 

typedef struct so{
    string value;
    int time;
}so;

bool tn(string s){
    int l =0, r = s.size() - 1;
    while(l <= r){
        if(s[l] != s[r]) return 0;
        l++, r--;
    }
    return s.size() > 1;
}

int check(vector<so> v, string s){
    for(int i = 0;  i < v.size(); i ++){
        if(s == v[i].value) return i;
    }
    return -1;
}

bool cmp(so x, so y){
    if(x.value.size() == y.value.size())return x.value > y.value;
    return x.value.size() > y.value.size();
}

int main(){
    //read();
    vector<so> v;
    string s; 
    while(cin >> s){
        if(tn(s)){
            int idx = check(v, s);
            if (idx != -1)
            {
                v[idx].time++;
            }
            else
            {
                so x;
                x.value = s;
                x.time = 1;
                v.pb(x);
            }

        } 
    }
    sort(v.begin(), v.end(), cmp);
    for(auto x : v){
        cout << x.value << " " << x.time << el;
    }
}
