#include <iostream>
using namespace std;

class HCN
{
private:
    float d, r;

public:
    HCN(float d, float r)
    {
        this->d = d;
        this->r = r;
    }
    float tinhChuVi()
    {
        return (d + r) * 2;
    }
    void inThongTin(){
        cout<<"dai: "<<d<<"\nrong: "<<r<<endl;
    }
    friend float tinhDienTich(HCN hcn);
};
float tinhDienTich(HCN hcn)
{
    return hcn.r * hcn.d;
}
int main()
{
    HCN hcn(2.5,4);
    cout<<"dien tich hinh chu nhat la: "<<tinhDienTich(hcn)<<endl;
    return 0;
}