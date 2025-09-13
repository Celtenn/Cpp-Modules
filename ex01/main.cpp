#include <iostream>
#include <cstring>
#include <string>

class TELEFON
{
    private:
        std::string isim;
        int sayi;
        int cikis;
    public:

    void isim_ekle(std::string isimm)
    {
        isim = isimm;
    }

    void sayi_ekle(int num)
    {
        sayi = num;
    }

    void cikis_ekle(int cik)
    {
        cikis = cik;
    }

    void yazdir()
    {
        std::cout << isim << "\n" << sayi << "\n" << cikis << "\n";
    }
};

int main()
{
    TELEFON ehe;
    std::string x;
    while (1)
    {
        std::cout << "ADD, SEARCH and EXIT\n";
        getline(std::cin, x);
        if (x == "ADD")
            ehe.isim_ekle(x);
        else if (x == "SEARCH")
            ehe.sayi_ekle(1);
        else if (x == "EXIT")
            ehe.cikis_ekle(2);
        else if (x == "YAZ")
            ehe.yazdir();
    }
}