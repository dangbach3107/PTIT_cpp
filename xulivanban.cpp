#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

int main() {
    vector<string> v;
	string tmp;
	while(cin >> tmp){
		for(auto &x : tmp) x =tolower(x);
		v.pb(tmp);
	}
	v[0][0] = toupper(v[0][0]);
	for(int i = 0 ; i < v.size();i++){
		if(v[i].back() == '.' || v[i].back() == '?' || v[i].back() == '!'){
			for (int j = 0; j < v[i].size() - 1; j++) cout << v[i][j];
            cout << el;
			if (i + 1 < v.size()) 
                v[i + 1][0] = toupper(v[i + 1][0]);
		}
		else cout << v[i] << " ";
	}
}