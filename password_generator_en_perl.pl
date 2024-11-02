use strict;
use warnings;

sub password_generator {
    my ($num) = @_;
    my $chars = "abcdefghijklmnñopqrstuvwxyzABCDEFGHIJKMNÑOPQRSTUVWXYZ!#$%&/()='?¡¿\\+*~}]`{[^<>-_.:,;|°¬";
    my $password = '';

    for (my $i = 0; $i < $num; $i++) {
        my $random_index = int(rand(length($chars)));
        $password .= substr($chars, $random_index, 1);
    }

    return $password;
}

my $opc = 'Y';
while ($opc ne 'N' && $opc ne 'n') {
    print "Write the num of characters: ";
    my $num = <STDIN>;
    chomp $num;
    my $generated_password = password_generator($num);
    print "Your password is: $generated_password\n";
    print "Continue? Y/N ";
    $opc = <STDIN>;
    chomp $opc;
}

print "Presiona una tecla para continuar...\n";