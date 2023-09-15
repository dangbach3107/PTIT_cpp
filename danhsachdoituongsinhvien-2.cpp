#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define read() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
int cnt = 0;
class SinhVien{
    private:
    string name, lop, dob;
    int stt;
    float gpa;
    public:
    friend istream &operator >> (istream& in, SinhVien &x){
        x.stt = ++cnt;
        cin.ignore();
        getline(in, x.name);
        stringstream ss(x.name);
        string tmp, ten = "";
        while(ss >> tmp){
            for(auto &k : tmp) k = tolower(k);
            tmp[0] = toupper(tmp[0]);
            ten += tmp + " ";
        }
        x.name = ten;
        getline(in, x.lop);
        getline(in, x.dob);
        if(x.dob[1] == '/') x.dob.insert(0, "0");
        if(x.dob[4] == '/') x.dob.insert(3, "0");
        cin >> x.gpa;
        return in;
    }
    friend ostream &operator << (ostream &out, SinhVien x){
        if(x.stt <= 9) out << "B20DCCN00" << x.stt << " ";
        else out << "B20DCCN0" << x.stt << ' ';
        out << x.name << x.lop << " " << x.dob << " "<< fixed<< setprecision(2) << x.gpa << el; 
        return out;
    }
};

int main(){
    read();
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}