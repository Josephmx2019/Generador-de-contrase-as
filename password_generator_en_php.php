<?php

function passwordGenerator($num) {
    $chars = "abcdefghijklmnñopqrstuvwxyzABCDEFGHIJKMNÑOPQRSTUVWXYZ!#$%&/()='?¡¿\\+*~}]`{[^<>-_.:,;|°¬";
    $password = '';

    for ($i = 0; $i < $num; $i++) {
        $randomIndex = mt_rand(0, strlen($chars) - 1);
        $password .= $chars[$randomIndex];
    }

    return $password;
}

$opc = 'Y';
while ($opc != 'N' && $opc != 'n') {
    echo "Write the num of characters: ";
    $num = intval(fgets(STDIN));
    $generatedPassword = passwordGenerator($num);
    echo "Your password is: $generatedPassword\n";
    echo "Continue? Y/N ";
    $opc = trim(fgets(STDIN));
}

echo "Presiona una tecla para continuar...\n";
?>