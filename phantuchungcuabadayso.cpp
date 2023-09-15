#include<bits/stdc++.h>
using namespace std;
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 
#define ll long long int
using namespace std;

int main(){
    //read;
    int t; cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        vector <ll> v1, v2, v3;
        f0(i, a){
            ll tmp;  cin >> tmp;
            v1.push_back(tmp);
        }
        f0(i, b){
            ll tmp; cin >> tmp;
            v2.push_back(tmp);
        }
        f0(i, c){
            ll tmp; cin >> tmp;
            v3.push_back(tmp);
        }
        int check = 1;
        int i =0, j = 0, k = 0;
        while(i < a && j < b && k <c){
            if(v1[i] == v2[j] && v2[j] == v3[k]){
                cout << v1[i] << " ";
                check = 0;
                i ++; j++; k++;
            }
            else if(v1[i] < v2[j] ) i++;
            else if(v2[j] < v3[k]) j++;
            else k++;
        }
        if(check) cout << -1;
        cout << endl;
    }
}