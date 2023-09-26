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

class SinhVien
{
private:
    string hoTen;
    NgaySinh ngaySinh;
    string gioiTinh;
    float diemToan;
    float diemLy;
    float diemHoa;

public:
    void nhap();
    void in();
    float tinhTBM();
};
void SinhVien::nhap()
{
    cout << "nhap ho ten: ";
    cin.ignore();
    getline(cin, hoTen);
    cout << "-------- nhap ngay sinh ---------- \n";
    ngaySinh.nhap();
    cout << "nhap gioi tinh: ";
    cin.ignore();
    getline(cin, gioiTinh);
    cout << "nhap diem toan: ";
    cin >> diemToan;
    cout << "nhap diem ly: ";
    cin >> diemLy;
    cout << "nhap diem hoa: ";
    cin >> diemHoa;
}
void SinhVien::in()
{
    cout << setw(35) << left << hoTen;
    cout << setw(20) << left << ngaySinh.inNgaySinh();
    cout << setw(15) << left << gioiTinh;
    cout << setw(10) << left << diemToan;
    cout << setw(10) << left << diemLy;
    cout << setw(10) << left << diemHoa;
}

float SinhVien::tinhTBM()
{
    return (diemToan + diemLy + diemHoa) / 3;
}

void nhapDSSinhVien(SinhVien sinhVien[], int n)
{
    cout << "---------- nhap danh sach sinh vien -------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "----------- nhap sinh vien thu " << i + 1 << " -------------\n";
        sinhVien[i].nhap();
    }
    system("cls");
}

void inTieuDe()
{
    cout << setw(35) << left << "HO TEN";
    cout << setw(20) << left << "NGAY SINH";
    cout << setw(15) << left << "GIOI TINH";
    cout << setw(10) << left << "DIEM TOAN";
    cout << setw(10) << left << "DIEM LY";
    cout << setw(10) << left << "DIEM HOA";
    cout << setw(10) << left << "TBM" << endl;
}
void inDSSinhVien(SinhVien sinhVien[], int n)
{
    cout << "----------------- DS Sinh Vien ----------------\n";
    inTieuDe();
    for (int i = 0; i < n; i++)
    {
        sinhVien[i].in();
        cout << setw(10) << left << sinhVien->tinhTBM()<< endl;
    }
}
int main()
{
    int n;
    cout << "nhap so luong sinh vien: ";
    cin >> n;
    SinhVien sinhVien[n];
    nhapDSSinhVien(sinhVien, n);
    inDSSinhVien(sinhVien, n);
    return 0;
}