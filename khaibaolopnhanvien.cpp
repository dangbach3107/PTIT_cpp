#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define read() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

class NhanVien{
    private:
    string name, sex, dob, add, id, date;
    public:
    friend istream &operator >> (istream &in, NhanVien &x){
        getline(in, x.name);
        getline(in, x.sex);
        getline(in, x.dob);
        getline(in, x.add);
        getline(in, x.id);
        getline(in, x.date);
        return in;
    }
    friend ostream &operator << (ostream &out, NhanVien x){
        out << "00001 " << x.name << " " << x. sex << " " << x.dob << " " << x.add << " " << x.id << " "<< x.date;
        return out;
     }
};


int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}