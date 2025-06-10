#include <iostream>
#include <exception>
// untuk object exception yang akan digunakan
#include <array>
// untuk object array yang akan digunakan
using namespace std;

int main()
{
    cout << "Awal program" << endl; // penanda 1:...
    try {
        array <int, 3> data = { 10, 20 , 30 };
        // pesan array integer 3 elemen
        cout << data.at(5) << endl;
        // memanggil array elemen ke 5
    }
    catch(exception& e){
        //penangkap menggunakan obyek exeption
        cout << e.what() << endl;
        /*akan dieksekusi karena array data hanya memiliki 3 element*/
    }
    cout << "Baris Program yang terakhir"<< endl;
    /*penanda 2 : bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/
    return 0;
}