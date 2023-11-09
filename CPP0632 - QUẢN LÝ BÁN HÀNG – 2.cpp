#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;
using ll = long long;

int kh = 0, mh = 0, hd = 0;

class KhachHang_tmp{
    public:
    string id, name, gender, dob, add; 
};

class MatHang_tmp{
    public:
    string id, name, att;
    ll buy, sell;
};

KhachHang_tmp tmp1[25];
MatHang_tmp tmp2[45];

class KhachHang{
    public:
    string id, name, gender, dob, add; 
    friend istream & operator >> (istream & in, KhachHang &x){
        if(kh == 0) cin.ignore();
        kh++;
        x.id = "KH" + string(3 - to_string(kh).length(), '0') + to_string(kh);
        getline(in, x.name);
        getline(in, x.gender);
        getline(in, x.dob);
        getline(in, x.add);
        tmp1[kh - 1].id = x.id;
        tmp1[kh - 1].name = x.name;
        tmp1[kh - 1].add = x.add; 
        return in;
    }
};

class MatHang{
    public:
    string id, name, att;
    ll buy, sell;
    friend istream & operator >> (istream & in, MatHang &x){
        cin.ignore();
        mh++;
        x.id = "MH" + string(3 - to_string(mh).length(), '0') + to_string(mh);
        getline(in, x.name);
        getline(in, x.att);
        cin >> x.buy >> x.sell;
        tmp2[mh - 1].id = x.id;
        tmp2[mh - 1].name = x.name;
        tmp2[mh - 1].att = x.att;
        tmp2[mh - 1].buy = x.buy;
        tmp2[mh - 1].sell = x.sell;
        return in;
    }
};

class HoaDon{
    public:
    string id, id1, id2;
    ll times;
    friend istream & operator >> (istream & in, HoaDon &x){
        hd++;
        x.id = "HD" + string(3 - to_string(hd).length(), '0') + to_string(hd);
        cin >> x.id1 >> x.id2 >> x.times;
        return in;
    }
    friend ostream& operator<<(ostream& out , HoaDon x){
        cout << x.id << " ";
        for(int i = 0 ; i < kh ; i++){
            if(x.id1 == tmp1[i].id) {
                cout << tmp1[i].name << " " << tmp1[i].add << " ";
                break;
            }
        }
        int index = 0;
        for(int i = 0; i < mh ; i++){
            if(x.id2 == tmp2[i].id){
                index = i;
                cout << tmp2[i].name << " " ;
                break;
            }
        }
        cout << x.times << " " << x.times * tmp2[index].sell << " " << (tmp2[index].sell - tmp2[index].buy) * x.times << endl;
        return out;
    }
};

bool cmp(HoaDon a, HoaDon b){
    int index1, index2;
    for(int i = 0; i < mh; i++){
        if(a.id2 == tmp2[i].id) index1 = i;
        if(b.id2 == tmp2[i].id) index2 = i;
    }
    return (tmp2[index1].sell - tmp2[index1].buy) * a.times > (tmp2[index2].sell - tmp2[index2].buy) * b.times;
}

void sapxep(HoaDon *x, int k){
    stable_sort(x, x + k, cmp);
}


int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}