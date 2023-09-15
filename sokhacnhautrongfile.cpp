#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

int main(){
    ifstream in;
    in.open("DATA.in");
    int a[1002] ={0};
    int n;
    while(in >> n){
        a[n] ++;
    }
    for(int i = 0; i <= 1000; i ++){
        if(a[i]) cout << i << ' ' << a[i] << el;
    }
}