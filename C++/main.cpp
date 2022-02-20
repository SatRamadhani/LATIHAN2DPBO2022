/* Saya [Muhammad Satria Ramadhani - 2005128] mengerjakan evaluasi [Latihan
Praktikum 02] dalam mata kuliah [Desain dan Pemrograman Berorientasi Objek]
untuk keberkahan-Nya, maka saya tidak melakukan kecurangan seperti yang
telah dispesifikasikan. Aamiin. */

#include "header.hh"

int main()
{
    int i;
    Memory memory[3];

    // Hardcode input for first memory.
    memory[0].setIDProduct("Techi-1011");
    memory[0].setPrice(760000);
    memory[0].setBrand("Techi");
    memory[0].setModel("1011");
    memory[0].setFrequency(46000);
    memory[0].setMemorySize(16777216);
    memory[0].setSupportsCuda(true);

    // Hardcode input for second memory.
    memory[1].setIDProduct("Sam-0212");
    memory[1].setPrice(480000);
    memory[1].setBrand("Sam");
    memory[1].setModel("0212");
    memory[1].setFrequency(19200);
    memory[1].setMemorySize(8388608);
    memory[1].setSupportsCuda(false);

    // Hardcode input for third memory.
    memory[2].setIDProduct("Bootheaven-512");
    memory[2].setPrice(825000);
    memory[2].setBrand("Bootheaven");
    memory[2].setModel("521");
    memory[2].setFrequency(48000);
    memory[2].setMemorySize(16777216);
    memory[2].setSupportsCuda(true);

    // Output, print every available memory...
    for(i = 0; i < 3; i++)
    {
        cout << "= = = Data Produk No. " << (i + 1) << " = = =" << '\n';
        cout << "ID Produk     : " << memory[i].getIDProduct() << '\n';
        cout << "Harga Produk  : " << memory[i].getPrice() << '\n';
        cout << "Merk Produk   : " << memory[i].getBrand() << '\n';
        cout << "Model Produk  : " << memory[i].getModel() << '\n';
        cout << "Frekuensi     : " << memory[i].getFrequency() << " Hz\n";
        cout << "Ukuran        : " << memory[i].getMemorySize() << " MB\n";
        cout << "Dukungan CUDA : " << memory[i].getSupportsCuda() << "\n\n";
    }

    return 0;
}