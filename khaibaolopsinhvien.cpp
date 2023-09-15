#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define read() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

class SinhVien{
    private:
    string name, lop, dob;
    float gpa;
    public:
    friend istream &operator >> (istream& in, SinhVien &x){
        getline(in, x.name);
        getline(in, x.lop);
        getline(in, x.dob);
        if(x.dob[1] == '/') x.dob.insert(0, "0");
        if(x.dob[4] == '/') x.dob.insert(3, "0");
        cin >> x.gpa;
        return in;
    }
    friend ostream &operator << (ostream &out, SinhVien x){
        out << "B20DCCN001 " << x.name << " " << x.lop << " " << x.dob << " "<< fixed<< setprecision(2) << x.gpa << el; 
        return out;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}