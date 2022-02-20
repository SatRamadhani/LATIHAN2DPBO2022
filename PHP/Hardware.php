<?php
    // Class Hardware, treated as midclass.
    class Hardware extends Product
    {
        // Hardware attributes.
        private $brand;
        private $model;
    
        /* Constructor.
           Please take note that after a few try, PHP seems to not accept
           multiple constructor. So I decided to set it as empty constructor. */
    
        // Empty constructor.
        public function __construct()
        {
    
        }
    
        /* Setter and Getter. */
    
        // Set brand attribute.
        public function setBrand($brand)
        {
            $this->brand = $brand;
        }
    
        // Set model attribute.
        public function setModel($model)
        {
            $this->model = $model;
        }
    
        // Get brand attribute.
        public function getBrand()
        {
            return $this->brand;
        }
    
        // Get model attribute.
        public function getModel()
        {
            return $this->model;
        }

        /* Destructor. */
        
        public function __destruct()
        {
            
        }
    }
?>