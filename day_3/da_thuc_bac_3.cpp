#include<iostream>
using namespace std;

class DaThucBac3{
    public:
        float a;
        float b;
        float c;
        float d;
        DaThucBac3(float a = 0, float b = 0, float c = 0, float d = 0){
            this->a = a;
            this->b = b;
            this->c = c;
            this->d = d;
        }
        ~DaThucBac3(){}

        string toString(){
            return "" + to_string(a) + "x^3 + " + to_string(b) + "x^2 + " + to_string(c) + "x + " + to_string(d);
        }
        
        
};

DaThucBac3 tong(DaThucBac3 dt_1, DaThucBac3 dt_2){
    DaThucBac3 result;
    result.a = dt_1.a + dt_2.a;
    result.b = dt_1.b + dt_2.b;
    result.c = dt_1.c + dt_2.c;
    result.d = dt_1.d + dt_2.d;
    return result;
}
int main(){
    DaThucBac3 dt_1(1,2,3);
    DaThucBac3 dt_2(6,2,-7);
    cout<<"---------in ra--------"<<endl;
    cout<<dt_1.toString()<<endl;
    cout<<dt_2.toString()<<endl;
    cout<<"---------tong----------"<<endl;
    cout<<tong(dt_1,dt_2).toString()<<endl;
    return 0;
}