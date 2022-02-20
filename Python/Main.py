# Saya [Muhammad Satria Ramadhani - 2005128] mengerjakan evaluasi [Latihan
# Praktikum 02] dalam mata kuliah [Desain dan Pemrograman Berorientasi Objek]
# untuk keberkahan-Nya, maka saya tidak melakukan kecurangan seperti yang
# telah dispesifikasikan. Aamiin.

# Import class file.
from Product import Product
from Hardware import Hardware
from Memory import Memory

# Declare array of object.
memory = []

# Hardcode input for first memory.
memory.append(Memory())
memory[0].setIDProduct("Techi-1011")
memory[0].setPrice(760000)
memory[0].setBrand("Techi")
memory[0].setModel("1011")
memory[0].setFrequency(46000)
memory[0].setMemorySize(16777216)
memory[0].setSupportsCuda(True)

# Hardcode input for second memory.
memory.append(Memory())
memory[1].setIDProduct("Sam-0212")
memory[1].setPrice(480000)
memory[1].setBrand("Sam")
memory[1].setModel("0212")
memory[1].setFrequency(19200)
memory[1].setMemorySize(8388608)
memory[1].setSupportsCuda(False)

# Hardcode input for third memory.
memory.append(Memory())
memory[2].setIDProduct("Bootheaven-512")
memory[2].setPrice(825000)
memory[2].setBrand("Bootheaven")
memory[2].setModel("521")
memory[2].setFrequency(48000)
memory[2].setMemorySize(16777216)
memory[2].setSupportsCuda(True)

# Output, print every available memory...
for i in range(3):
    print("= = = Data Produk No.", (i + 1), " = = =")
    print("ID Produk     :", memory[i].getIDProduct())
    print("Harga Produk  :", memory[i].getPrice())
    print("Merk Produk   :", memory[i].getBrand())
    print("Model Produk  :", memory[i].getModel())
    print("Frekuensi     :", memory[i].getFrequency(), "Hz")
    print("Ukuran        :", memory[i].getMemorySize(), "MB")
    print("Dukungan CUDA :", memory[i].getSupportsCuda())
    print()