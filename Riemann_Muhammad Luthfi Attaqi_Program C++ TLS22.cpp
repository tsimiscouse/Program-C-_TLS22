// IDR CURRENCY CONVERTER

#include <iostream>
#include <string>

using namespace std;

void converter(float uang, string currencyName)
{
    if (currencyName == "USD")
    {
        cout << "uang anda dalam USD : $" << (uang * 0.000065) << endl;
    }
    else if (currencyName == "EURO")
    {
        cout << "uang anda dalam EURO : €" << (uang * 0.000068) << endl;
    }
    else if (currencyName == "GBP")
    {
        cout << "uang anda dalam GBP : £" << (uang * 0.000061) << endl;
    }
    else if (currencyName == "CNY")
    {
        cout << "uang anda dalam CNY : Ұ" << (uang * 0.00047) << endl;
    }
    else if (currencyName == "MYR")
    {
        cout << "uang anda dalam MYR : RM" << (uang * 0.00031) << endl;
    }
    else
    {
        cout << "mata uang yang diinput tidak tersedia";
    }
    cout << "\n-----------------------------------------------" << endl;
    cout << "\ningin melakukan konversi lagi?" << endl;
}

int main()
{
    float uang;
    string mataUang;
    bool ans, ans2;
    cout << "-----Selamat Datang di Konverter Mata Uang-----"<< endl;
    cout << "\nketik 1 untuk konversi\n\nketik 0 untuk keluar" << endl;
    cout << "\n";
    cin >> ans;

    if (ans == 1){
        cout << "\n-----------------------------------------------" << endl;
        cout << "\nmasukan uang dalam rupiah : Rp";
        cin >> uang;
        cout << "\n";
        cout << "masukan mata uang yang diinginkan \n(USD/EURO/GBP/CNY/MYR) : ";
        cin >> mataUang;
        cout << "\n";
        converter(uang, mataUang);
        
        cout << "\nketik 1 untuk melanjutkan konversi\n" << endl;
        cin >> ans2;
    
        while (ans2 == 1){
            cout << "\n-----------------------------------------------" << endl;
            cout << "\nketik 1 untuk konversi\n\nketik 0 untuk keluar" << endl;
            cout << "\n";
            cin >> ans;
    
            if (ans == 1){
                cout << "\n-----------------------------------------------" << endl;
                cout << "masukan uang dalam rupiah : Rp";
                cin >> uang;
                cout << "\n";
                cout << "masukan mata uang yang diinginkan \n(USD/EURO/GBP/CNY/MYR) : ";
                cin >> mataUang;
                cout << "\n";
                converter(uang, mataUang);
            } else {
                break;
            }
    
            cout << "\nketik 1 untuk melanjutkan konversi\n" << endl;
            cin >> ans2;
        }
    }
    cout << "\n------------------Terima kasih-----------------" << endl;
    return 0;
}