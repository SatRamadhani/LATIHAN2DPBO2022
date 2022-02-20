/* Saya [Muhammad Satria Ramadhani - 2005128] mengerjakan evaluasi [Latihan
Praktikum 02] dalam mata kuliah [Desain dan Pemrograman Berorientasi Objek]
untuk keberkahan-Nya, maka saya tidak melakukan kecurangan seperti yang
telah dispesifikasikan. Aamiin. */

import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        // Declare iteration and object.
        int i;
        Memory[] memory = new Memory[3];

        // Hardcode input for first memory.
        memory[0] = new Memory();
        memory[0].setIDProduct("Techi-1011");
        memory[0].setPrice(760000);
        memory[0].setBrand("Techi");
        memory[0].setModel("1011");
        memory[0].setFrequency(46000);
        memory[0].setMemorySize(16777216);
        memory[0].setSupportsCuda(true);

        // Hardcode input for second memory.
        memory[1] = new Memory();
        memory[1].setIDProduct("Sam-0212");
        memory[1].setPrice(480000);
        memory[1].setBrand("Sam");
        memory[1].setModel("0212");
        memory[1].setFrequency(19200);
        memory[1].setMemorySize(8388608);
        memory[1].setSupportsCuda(false);

        // Hardcode input for third memory.
        memory[2] = new Memory();
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
            System.out.println("= = = Data Produk No. " + (i + 1) + " = = =");
            System.out.println("ID Produk     : " + memory[i].getIDProduct());
            System.out.println("Harga Produk  : " + memory[i].getPrice());
            System.out.println("Merk Produk   : " + memory[i].getBrand());
            System.out.println("Model Produk  : " + memory[i].getModel());
            System.out.println("Frekuensi     : " + memory[i].getFrequency() + " Hz");
            System.out.println("Ukuran        : " + memory[i].getMemorySize() + " MB");
            System.out.println("Dukungan CUDA : " + memory[i].getSupportsCuda());
            System.out.println();
        }
    }
}
