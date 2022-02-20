<?php
    // Class Product, treated as superclass.
    class Product
    {
        // Product attributes.
        private $price;
        private $idProduct;

        /* Constructor.
           Please take note that after a few try, PHP seems to not accept
           multiple constructor. So I decided to set it as empty constructor. */
        
        // Empty constructor.
        public function __construct()
        {
            
        }

        /* Setter and Getter. */

        // Set price attribute.
        public function setPrice($price)
        {
            $this->price = $price;
        }

        // Set product's ID attribute.
        public function setIDProduct($idProduct)
        {
            $this->idProduct = $idProduct;
        }

        // Get price attribute.
        public function getPrice()
        {
            return $this->price;
        }

        // Get product's ID attribute.
        public function getIDProduct()
        {
            return $this->idProduct;
        }

        /* Destructor. */
        
        public function __destruct()
        {
            
        }
    }
?>