#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int zero = 0, res = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == '0') zero++;
            else{
                if(zero > 1){
                    res += 3;
                    zero -= 2;
                }
                else zero = 0;
            }
        }
        cout << res << '\n';
    }
}