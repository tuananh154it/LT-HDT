#include<iostream>
using namespace std;

class Vector;
class MaTran{
    private:
        int mt[3][3];
    public:
        void in(){
            cout<<"-------------in ma tran-------------\n";
            for(int i = 0 ; i< 3; i++){
                for(int j = 0; j<3 ; j++){
                    cout<<mt[i][j]<<"   ";
                }
                cout<<endl;
            }
        }
        void nhap(){
            cout<<"-------------nhap ma tra-------------\n";
            for(int i = 0 ; i< 3; i++){
                for(int j = 0; j<3 ; j++){
                    cout<<"mt["<<i<<"]["<<j<<"] = ";
                    cin>>mt[i][j];
                }
            }
        }
        Vector nhan(Vector vt);
};
class Vector{
    private:
        int vt[3];
    public:
        void in(){
            cout<<"---------- in vector ----------\n";
            for(int i = 0 ; i < 3 ;i++){
                cout<<vt[i]<<"   ";
            }
            cout<<endl;
        }
        void nhap(){
            cout<<"---------- nhap vector ----------\n";
            for(int i = 0 ; i < 3 ;i++){
                cout<<"vt["<<i<<"] = ";
                cin>>vt[i];
            }
        }
        friend Vector nhan(Vector vt);
};
// Vector MaTran::nhan(Vector vt){
//     Vector result;
//     for(int i = 0; i < 3;i++){
//         result.vt[i] = 0;
//         for(int j = 0 ; j < 3 ; j++)
//     }
// }
int main(){

    return 0;
}