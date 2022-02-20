<?php
    /* Saya [Muhammad Satria Ramadhani - 2005128] mengerjakan evaluasi [Latihan
    Praktikum 02] dalam mata kuliah [Desain dan Pemrograman Berorientasi Objek]
    untuk keberkahan-Nya, maka saya tidak melakukan kecurangan seperti yang
    telah dispesifikasikan. Aamiin. */

    include "Product.php";
    include "Hardware.php";
    include "Memory.php";

    // Declare array of object.
    $memory = array();

    // Hardcode input for first memory.
    $memory1 = new Memory();
    $memory1->setIDProduct("Techi-1011");
    $memory1->setPrice(760000);
    $memory1->setBrand("Techi");
    $memory1->setModel("1011");
    $memory1->setFrequency(46000);
    $memory1->setMemorySize(16777216);
    $memory1->setSupportsCuda(true);

    // Hardcode input for second memory.
    $memory2 = new Memory();
    $memory2->setIDProduct("Sam-0212");
    $memory2->setPrice(480000);
    $memory2->setBrand("Sam");
    $memory2->setModel("0212");
    $memory2->setFrequency(19200);
    $memory2->setMemorySize(8388608);
    $memory2->setSupportsCuda(false);

    // Hardcode input for third memory.
    $memory3 = new Memory();
    $memory3->setIDProduct("Bootheaven-512");
    $memory3->setPrice(825000);
    $memory3->setBrand("Bootheaven");
    $memory3->setModel("521");
    $memory3->setFrequency(48000);
    $memory3->setMemorySize(16777216);
    $memory3->setSupportsCuda(true);

    // Merge memory as array.
    array_push($memory, $memory1);
    array_push($memory, $memory2);
    array_push($memory, $memory3);

    // Output, print every available memory...
    for($i = 0; $i < 3; $i++)
    {
        echo "= = = Data Produk No. " . ($i + 1) . " = = =" . "<br/>";
        echo "ID Produk : " . $memory[$i]->getIDProduct() . "<br/>";
        echo "Harga Produk : " . $memory[$i]->getPrice() . "<br/>";
        echo "Merk Produk : " . $memory[$i]->getBrand() . "<br/>";
        echo "Model Produk : " . $memory[$i]->getModel() . "<br/>";
        echo "Frekuensi : " . $memory[$i]->getFrequency() . " Hz" . "<br/>";
        echo "Ukuran : " . $memory[$i]->getMemorySize() . " MB" . "<br/>";
        echo "Dukungan CUDA : " . $memory[$i]->getSupportsCuda() . "<br/><br/>";
    }
?>