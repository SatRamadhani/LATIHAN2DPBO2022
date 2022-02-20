// Class Hardware, treated as midclass.
public class Hardware extends Product
{
    // Hardware attributes.
    private String brand;
    private String model;

    /* Constructor. */

    // Empty constructor.
    public Hardware()
    {

    }

    // Constructor with hardware's data (will it be used?).
    public Hardware(String brand, String model)
    {
        this.brand = brand;
        this.model = model;
    }

    /* Setter and Getter. */

    // Set brand attribute.
    public void setBrand(String brand)
    {
        this.brand = brand;
    }

    // Set model attribute.
    public void setModel(String model)
    {
        this.model = model;
    }

    // Get brand attribute.
    public String getBrand()
    {
        return this.brand;
    }

    // Get model attribute.
    public String getModel()
    {
        return this.model;
    }
}
