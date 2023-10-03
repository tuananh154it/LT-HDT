#include <iostream>

using namespace std;

class HocSinh
{
private:
    string maHocSinh;
    string hoTen;
    string lop;
    float diemToan;
    float diemLy;
    float diemHoa;

public:
    HocSinh(string maHocSinh, string hoTen, string lop, float diemToan, float diemLy, float diemHoa)
    {
        this->maHocSinh = maHocSinh;
        this->hoTen = hoTen;
        this->lop = lop;
        this->diemToan = diemToan;
        this->diemLy = diemLy;
        this->diemHoa = diemHoa;
    }
    ~HocSinh() {}
    void inThongTin()
    {
        cout << "Ma hoc sinh: " << maHocSinh << endl;
        cout << "Ho ten: " << hoTen << endl;
        cout << "Lop: " << lop << endl;
        cout << "Diem toan: " << diemToan << endl;
        cout << "Diem ly: " << diemLy << endl;
        cout << "Diem hoa: " << diemHoa << endl;
    }
};
int main(){
    HocSinh hocSinh1("22103100015","Phung Tuan Anh","DHTI16A1CL",10,9,9);
    HocSinh hocSinh2("22103100001","Nguyen Ngoc Tu","DHTI16A1CL",5,9,7.5);
    hocSinh1.inThongTin();
    cout<<"-------------------------\n";
    hocSinh2.inThongTin();
    return 0;
}