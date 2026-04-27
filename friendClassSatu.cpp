#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{ 
private:
    string nama;
public:
    void setNama(string pNama)
        friend class siswa; // deklarasi friend class
    
};

class siswa
{
private:
    int id;

public:
    void setId(int pId);
    void displayAll(orang &a)
};

void siswa::displayAll(orang &a)
{
    cout << id << endl << a.nama << endl; 
}

void siswa::setNama(string pnama)
{
    nama = pnama;
}
void siswa::setId(int pId)
{
    id = pId;
}  

int main()
{
    orang joko;
    joko.setNama("Joko kumat");
    siswa joko_siswa;
    joko_siswa.setId(1);
    joko_siswa.displayAll(joko);
    return 0;
}