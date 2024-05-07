#include<iostream>
#include<string>
using namespace std;

class siswa;
class orang
{
    private:
        string nama;

    public:
        void setName(string pNama);
        friend class siswa;
};

class siswa
{
    private:
        int id;
    
    public:
        void setId(int pId);
        void displayAll(orang &a);
};

void siswa::displayAll(orang &a)
{
    cout << id << endl << a.nama;
}
void orang::setName(string pNama)
{
    nama = pNama;
}
void siswa::setId(int pId)
{
    id = pId;
}
int main()
{
    orang joko;
    joko.setName("Joko Susilo");
    siswa joko_siswa;
    joko_siswa.setId(1);
    joko_siswa.displayAll(joko);
    return 0;
}