// Class Memory, treated as subclass.
public class Memory extends Hardware
{
    // Memory attributes.
    private int frequency;
    private int memorySize;
    private Boolean supportsCuda;

    /* Constructor. */

    // Empty constructor.
    public Memory()
    {

    }

    // Constructor with memory's data.
    public Memory(int frequency, int memorySize, Boolean supportsCuda)
    {
        this.frequency = frequency;
        this.memorySize = memorySize;
        this.supportsCuda = supportsCuda;
    }

    /* Setter and Getter. */

    // Set frequency attribute.
    public void setFrequency(int frequency)
    {
        this.frequency = frequency;
    }

    // Set memory size attribute.
    public void setMemorySize(int memorySize)
    {
        this.memorySize = memorySize;
    }

    // Set CUDA support attribute.
    public void setSupportsCuda(Boolean supportsCuda)
    {
        this.supportsCuda = supportsCuda;
    }

    // Get frequency attribute.
    public int getFrequency()
    {
        return this.frequency;
    }

    // Get memory size attribute.
    public int getMemorySize()
    {
        return this.memorySize;
    }

    // Get CUDA support attribute.
    public Boolean getSupportsCuda()
    {
        return this.supportsCuda;
    }
}