// Declare library.
#include <iostream>
#include <string>

using namespace std;

// Class Product, treated as superclass.
class Product
{
    public:
        // Constructor.
        Product();
        Product(int price, string idProduct);

        // Set attributes.
        void setPrice(int price);
        void setIDProduct(string idProduct);

        // Get attributes.
        int getPrice();
        string getIDProduct();

        // Destructor.
        ~Product();
    
    private:
        // Product attributes.
        int price;
        string idProduct;
};

// Class Hardware, treated as midclass.
class Hardware : public Product
{
    public:
        // Constructor.
        Hardware();
        Hardware(string brand, string model);

        // Set attributes.
        void setBrand(string brand);
        void setModel(string model);

        // Get attributes.
        string getBrand();
        string getModel();

        // Destructor.
        ~Hardware();
    
    private:
        // Hardware attributes.
        string brand, model;
};

// Class Memory, treated as subclass.
class Memory : public Hardware
{
    public:
        // Constructor.
        Memory();
        Memory(int frequency, int memorySize, bool supportsCuda);

        // Set attributes.
        void setFrequency(int frequency);
        void setMemorySize(int memorySize);
        void setSupportsCuda(bool supportsCuda);

        // Get attributes.
        int getFrequency();
        int getMemorySize();
        bool getSupportsCuda();

        // Destructor.
        ~Memory();
    
    private:
        // Memory attributes.
        int frequency, memorySize;
        bool supportsCuda;
};