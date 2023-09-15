#include<bits/stdc++.h>
using namespace std;
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 
#define ll long long int

using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n; cin >> n;
        int a[n], b[n];
        f0(i, n) {
            cin >> b[i];
        }
        int index= 0;
        sort(b, b + n);
        f0(i, n) {
            if(i % 2 == 0){
                a[i] = b[index++];
            }
        }
        f0(i, n){
            if (i & 1) a[i] = b[index++];
        }
        f0(i, n) cout << a[i] << " ";
        cout << endl;
    }
    
    return 0;
}
