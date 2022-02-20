// Class Product, treated as superclass.
public class Product
{
    // Product attributes.
    private int price;
    private String idProduct;
    
    /* Constructor. */

    // Empty constructor.
    public Product()
    {

    }

    // Constructor with product's data (will it be used?).
    public Product(int price, String idProduct)
    {
        this.price = price;
        this.idProduct = idProduct;
    }

    /* Setter and Getter. */

    // Set price attribute.
    public void setPrice(int price)
    {
        this.price = price;
    }

    // Set product's ID attribute.
    public void setIDProduct(String idProduct)
    {
        this.idProduct = idProduct;
    }

    // Get price attribute.
    public int getPrice()
    {
        return this.price;
    }

    // Get product's ID attribute.
    public String getIDProduct()
    {
        return this.idProduct;
    }
}
