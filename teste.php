<?php

$string = "O rato roeu a roupa do Rei de Roma";
$contadorA = 0;

for($i = 0;$i < strlen($string); $i++){

    if($string[$i] === "a"){
        $contadorA++;
    }
}

echo $contadorA;