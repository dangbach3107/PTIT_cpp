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
class NhanVien{
    private:
    string stt;
    string name, sex, dob, add, id, date;
    public:
    friend istream &operator >> (istream& in, NhanVien &x){
        if(!cnt) in.ignore();
        cnt++;
        x.stt = string(5 - to_string(cnt).length(), '0') + to_string(cnt);
        getline(in, x.name);
        stringstream ss(x.name);
        string tmp, ten = "";
        while(ss >> tmp){
            for(auto &k : tmp) k = tolower(k);
            tmp[0] = toupper(tmp[0]);
            ten += tmp + " ";
        }
        x.name = ten;
        getline(in, x.sex);
        getline(in, x.dob);
        getline(in, x.add);
        getline(in, x.id);
        getline(in, x.date);
        if(x.dob[1] == '/') x.dob.insert(0, "0");
        if(x.dob[4] == '/') x.dob.insert(3, "0");
        return in;
    }
    friend ostream &operator << (ostream &out, NhanVien x){
        out <<x.stt << " "<<  x.name << x.sex << " " << x.dob << " "<< x.add << " " << x.id << " " << x.date << el;
        return out;
    }
};

int main(){
    read();
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}