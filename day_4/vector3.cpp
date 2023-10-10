#include <iostream>
#include <math.h>
using namespace std;

class Vector3
{
private:
    int a, b, c;

public:
    Vector3(int a = 0, int b = 0, int c = 0)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    ~Vector3(){};
    void nhap()
    {
        cout << "nhap tao do co dang a b c: ";
        cin >> a >> b >> c;
    }
    void in()
    {
        cout << "(" << a << ", " << b << ", " << c << ")" << endl;
    }
    friend Vector3 tong(Vector3 vts[], int n);
    friend float doDaiVector(Vector3 vt);
};
void nhapDS(Vector3 vts[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "nhap vector thu " << i + 1 << "\n";
        vts[i].nhap();
    }
}
void inDS(Vector3 vts[], int n)
{
    cout << "-------------IN DS--------------\n";
    for (int i = 0; i < n; i++)
    {
        vts[i].in();
    }
}
Vector3 tong(Vector3 vts[], int n)
{
    Vector3 result;
    for (int i = 0; i < n; i++)
    {
        result.a += vts[i].a;
        result.b += vts[i].b;
        result.c += vts[i].c;
    }
    return result;
}
// tinh do dai vector
inline float doDaiVector(Vector3 vt)
{
    return sqrt(vt.a * vt.a + vt.b * vt.b + vt.c * vt.c);
}

// sap xep theo thu tu tang cua do dai;
void sapXepTang(Vector3 vts[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (doDaiVector(vts[i]) > doDaiVector(vts[j]))
            {
                Vector3 temp = vts[i];
                vts[i] = vts[j];
                vts[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "nhap so luong vector: ";
    cin >> n;
    Vector3 vts[n];
    nhapDS(vts, n);
    // tong
    cout << "tong cac vector: ";
    tong(vts, n).in();
    // in tr khi sap xep
    inDS(vts, n);
    // in sau khi sap xep
    sapXepTang(vts, n);
    inDS(vts, n);

    return 0;
}