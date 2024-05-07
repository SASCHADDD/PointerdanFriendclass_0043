#include<iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout<<"No Induk = "<<nim<<endl;
    }
};

int main (){

    mahasiswa mhs{1}; //object mhs
    mhs.showNim(); //Member Access Operator

    mahasiswa &refMhs = mhs; //pointer Reference refMhs
    refMhs.nim = 2; //MemberAccess operation
    mhs.showNim(); //Member Access Operator

    mahasiswa *pMhs = &mhs; //pointer dereference pMhs
    pMhs->nim = 3; //Arrow operator
    pMhs->showNim();
    return 0;
}