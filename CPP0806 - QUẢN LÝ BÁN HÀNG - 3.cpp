#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;
using ll = long long;

int kh = 0, mh = 0, hd = 0;

class KhachHang{
    public:
    string id, name, gender, dob, add; 
};

class MatHang{
    public:
    string id, name, att;
    ll buy, sell;
};

class HoaDon{
    public:
    string id, id1, id2;
    int times;
};

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int n, m, k;
    ifstream in("KH.in");
    in >> n; in.ignore();
    f0(i, n){
        auto &x = dskh[i];
        kh++;
        x.id = "KH" + string(3 - to_string(kh).length(), '0') + to_string(kh);
        getline(in, x.name);
        getline(in, x.gender);
        getline(in, x.dob);
        getline(in, x.add);
    }
    in.close();
    ifstream in1("MH.in");
    in1 >> m; 
    f0(i, m){
        auto &x = dsmh[i];
        in1.ignore();
        mh++;
        x.id = "MH" + string(3 - to_string(mh).length(), '0') + to_string(mh);
        getline(in1, x.name);
        getline(in1, x.att);
        in1 >> x.buy >> x.sell;
    }
    in1.close();
    ifstream in2("HD.in");
    in2 >> k;
    f0(i, k){
        auto &x = dshd[i];
        hd++;
        x.id = "HD" + string(3 - to_string(hd).length(), '0') + to_string(hd);
        in2 >> x.id1 >> x.id2 >> x.times;
    }
    in2.close();
    f0(i, k){
        auto x = dshd[i];
        cout << x.id << " ";
        for(int j = 0 ; j < kh ; j++){
            if(x.id1 == dskh[j].id) {
                cout << dskh[j].name << " " << dskh[j].add << " ";
                break;
            }
        }
        for(int j = 0; j < mh ; j++){
            if(x.id2 == dsmh[j].id){
                cout << dsmh[j].name << " " << dsmh[j].att << " " << dsmh[j].buy << " " << dsmh[j].sell << " " << x.times << " " << x.times * dsmh[j].sell << endl;
                break;
            }
        }
    }
}