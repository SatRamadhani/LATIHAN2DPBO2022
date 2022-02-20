<?php
    // Class Memory, treated as subclass.
    class Memory extends Hardware
    {
        // Memory attributes.
        private $frequency;
        private $memorySize;
        private $supportsCuda;

        /* Constructor. */

        // Empty constructor.
        public function __construct()
        {

        }

        /* Setter and Getter. */

        // Set frequency attribute.
        public function setFrequency($frequency)
        {
            $this->frequency = $frequency;
        }

        // Set memory size attribute.
        public function setMemorySize($memorySize)
        {
            $this->memorySize = $memorySize;
        }

        // Set CUDA support attribute.
        public function setSupportsCuda($supportsCuda)
        {
            $this->supportsCuda = $supportsCuda;
        }

        // Get frequency attribute.
        public function getFrequency()
        {
            return $this->frequency;
        }

        // Get memory size attribute.
        public function getMemorySize()
        {
            return $this->memorySize;
        }

        // Get CUDA support attribute.
        public function getSupportsCuda()
        {
            return $this->supportsCuda;
        }
    }
?>