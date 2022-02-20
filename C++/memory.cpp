#include "header.hh"

/* Constructor. */

// Empty constructor.
Memory::Memory()
{

}

// Constructor with memory's data.
Memory::Memory(int frequency, int memorySize, bool supportsCuda)
{
    this->frequency = frequency;
    this->memorySize = memorySize;
    this->supportsCuda = supportsCuda;
}

/* Setter and Getter. */

// Set frequency attribute.
void Memory::setFrequency(int frequency)
{
    this->frequency = frequency;
}

// Set memory size attribute.
void Memory::setMemorySize(int memorySize)
{
    this->memorySize = memorySize;
}

// Set CUDA support attribute.
void Memory::setSupportsCuda(bool supportsCuda)
{
    this->supportsCuda = supportsCuda;
}

// Get frequency attribute.
int Memory::getFrequency()
{
    return frequency;
}

// Get memory size attribute.
int Memory::getMemorySize()
{
    return memorySize;
}

// Get CUDA support attribute.
bool Memory::getSupportsCuda()
{
    return supportsCuda;
}

/* Destructor. */

Memory::~Memory()
{
    
}