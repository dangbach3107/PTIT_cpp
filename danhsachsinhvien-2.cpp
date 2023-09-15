#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

struct SinhVien{
    string msv;
    string name;
    string lop;
    string dob;
    float gpa;
};

void nhap(struct SinhVien ds[], int n){
    for(int i = 0; i < n; i++){
        string msv = "B20DCCN0";
        if(i <= 8) {
            msv += '0';
            msv += i + '0' + 1;
        }
        else msv += to_string(i + 1);
        ds[i].msv = msv;
        cin.ignore();
        string a;
        getline(cin, a);
        stringstream ss1(a);
        string a1, a2;
        while(ss1 >> a1){
            for(auto &x : a1) x = tolower(x);
            a1[0] = toupper(a1[0]);
            a2 += a1 + ' ';
        }
        ds[i].name = a2;
        getline(cin, ds[i].lop);
        string x;
        getline(cin, x);
        stringstream ss(x);
        string x1,x2;
        while(getline(ss, x1, '/')){
            if(x1.size() == 1){
                x2 += '0' + x1 + '/';
            }
            else if(x1.size() == 2) x2 += x1 + '/';
            else x2 += x1;
        }
        ds[i].dob = x2;
        cin >> ds[i].gpa;
    }
}

void in(struct SinhVien ds[], int n){
    for(int i =0;i < n; i++){
        cout << ds[i].msv <<' '<< ds[i].name << ds[i].lop << ' '<< ds[i].dob << " "<<  fixed << setprecision(2) << ds[i].gpa << el;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}