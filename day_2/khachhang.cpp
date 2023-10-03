#include <iostream>
#include <iomanip>

using namespace std;

struct NgaySinh
{
    int ngay;
    int thang;
    int nam;
    void nhap()
    {
        cout << "nhap ngay: ";
        cin >> ngay;
        cout << "nhap thang: ";
        cin >> thang;
        cout << "nhap nam: ";
        cin >> nam;
    }
    string inNgaySinh()
    {
        return "" + to_string(ngay) + "/" + to_string(thang) + "/" + to_string(nam);
    }
};

class KhachHang {
    private:
        char hoTen[30];
        NgaySinh ngaySinh;
        char soCMT[10];
        char hoKhau[50];
    public:
        void nhap();
        void in();

};
void KhachHang::nhap(){
    cout<<"nhap ten: ";
    cin.ignore();
    cin.getline(hoTen,30);
    cout<<"------- nhap ngay thang nam sinh ---------\n";
    ngaySinh.nhap();
    cout<<"nhap so CMT: ";
    cin.ignore();
    cin.getline(soCMT,10);
    cout<<"nhap ho khau: ";
    cin.ignore();
    cin.getline(hoKhau, 50);
}
void KhachHang::in(){
    cout<<setw(35)<<left<<hoTen;
    cout<<setw(20)<<left<<ngaySinh.inNgaySinh();
    cout<<setw(15)<<left<<soCMT;
    cout<<setw(55)<<left<<hoKhau<<endl;
}
void nhapDSKhachHang(KhachHang khachHang[], int n){
    cout<<"------------ nhap danh sach khach hang ------------ \n";
    for(int i = 0; i <n; i++){
        cout<<"---------------- nhap thong tin khach hang thu "<<i + 1<<" ----------------\n";
        khachHang[i].nhap();
    }
    system("cls");
}
void inTieuDe(){
    cout<<setw(35)<<left<<"HO TEN";
    cout<<setw(20)<<left<<"NGAY SINH";
    cout<<setw(15)<<left<<"SO CMT";
    cout<<setw(55)<<left<<"HO KHAU"<<endl;
}
void inDSKhachHang(KhachHang khachHang[], int n){
    cout<<"-------------- Ds khach hang ---------------\n";
    inTieuDe();
    for(int i = 0 ; i< n ;i++){
        khachHang[i].in();
    }
}

void sapXepTang(KhachHang khachHang[], int n){
    for(int i = 0 ; i <n - 1 ; i++){
        for(int j = i + 1; j< n; j++){
            if(khachHang[i].)
        }
    }
}
int main(){
    int n;
    cout<<"nhap so luong khach  hang: ";
    cin>>n;
    KhachHang khachHang[n];

    return 0;
}