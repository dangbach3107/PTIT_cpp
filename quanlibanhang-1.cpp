#include<bits/stdc++.h>
using namespace std;
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 
#define ll long long int

int kh = 0, mh = 0, hd = 0, N, M;
class KhachHang{
    private:
    int stt;
    string ten, gt, ns, dc, st;
    public:
    friend istream &operator >> (istream &in, KhachHang &x){
        if(!kh) cin.ignore();
        x.stt = ++kh;
        if(x.stt <= 9){
            x.st = "KH00" + to_string(x.stt);
        }
        else x.st = "KH0" + to_string(x.stt);
        getline(in, x.ten);
        in >> x.gt >> x.ns >> x.dc;
        return in;
    }
    friend ostream &operator << (ostream &out, KhachHang x){
        out << x.ten << " "<< x.dc << " " ;
        return out;
    }
    friend string getst(KhachHang x){
        return x.st;
    }
};

class MatHang{
    private:
    int stt, ban, mua;
    string ten, dv, st;
    public:
    friend istream &operator >> (istream &in, MatHang &x){
        if(!mh) cin.ignore();
        x.stt = ++mh;
        if(x.stt <= 9){
            x.st = "MH00" + to_string(x.stt);
        }
        else x.st = "MH0" + to_string(x.stt);
        getline(in , x.ten);
        in >> x.dv >> x.ban >> x.mua;
        return in;
    }
    friend ostream &operator << (ostream &out, MatHang x){
        out << x.ten << " "<< x.dv << " " << x.mua << " " << x.ban << " ";
        return out;
    }
    friend string getst(MatHang x){
        return x.st;
    }
    friend int getgia(MatHang x){
        return x.ban;
    }
};

class HoaDon : public KhachHang , public MatHang{
    private:
    int stt, sl;
    string ma1, ma2, st;
    public:
    friend istream &operator >> (istream &in, HoaDon &x){
        x.stt = ++hd;
        if(x.stt <= 9){
            x.st = "HD00" + to_string(x.stt);
        }
        else x.st = "HD0" + to_string(x.stt);
        in >> x.ma1 >> x.ma2 >> x.sl;
        return in;
    }
    friend ostream &operator << (ostream &out, HoaDon x){
        out << x.st << " ";
        KhachHang aa;
        MatHang bb;
        f0(i, N){
            if(getst(dskh[i]) == x.ma1) {out << dskh[i] << " "; break;}
        }
        int gia;
        f0(i, M){
            if(getst(dsmh[i]) == x.ma2) {
                out << dsmh[i] << " ";
                gia = getgia(dsmh[i]);
                break;
            }
        }
        out << x.sl << " " << x.sl * gia << el;
        return out;
    }
};

int main(){
    read;
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
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}