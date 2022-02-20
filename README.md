# LATIHAN2DPBO2022
### Saya [Muhammad Satria Ramadhani - 2005128] mengerjakan evaluasi [Latihan Praktikum 02] dalam mata kuliah [Desain dan Pemrograman Berorientasi Objek] untuk keberkahan-Nya, maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Alur Program

Dalam program ini, terdapat 3 class: Product, Hardware, dan Memory. Class Product menjadi superclass dari seluruh class lainnya, dengan atribut harga dan ID produk. Class Hardware menjadi midclass di mana dia mendapatkan seluruh atribut Product, dengan tambahan detail *brand* dan model. Terakhir, class Memory menjadi subclass di mana dia mendapatkan seluruh atribut Hardware, yang mana berarti dia juga mendapatkan seluruh atribut Product. Class Memory juga mempunyai tambahan atribut, yaitu frekuensi, ukuran memori, dan dukungan CUDA.

Di kode utama, *array of object* dari memori dibuat untuk kemudian diisi secara *hardcode*. Karena objek yang dibuat adalah class Memory, maka seluruh atribut dari class Product dan class Hardware juga bisa diakses sesuai Getter-Setter masing-masing.  

## Hasil Program

**C++**

![C++](https://user-images.githubusercontent.com/72297396/154830396-5b60d50a-584e-45b9-acf1-7bc7e3cad457.png)

**Java**

![Java](https://user-images.githubusercontent.com/72297396/154830399-579c87c4-6990-4425-8c3e-8b937018b240.png)

**PHP**

![PHP](https://user-images.githubusercontent.com/72297396/154830405-fd71bc73-cf33-45b9-bb02-64e6435a0928.png)

**Python**

![Python](https://user-images.githubusercontent.com/72297396/154830410-e13d42e7-a261-4abd-983c-a098c71768dc.png)
