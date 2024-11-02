#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

char* password_generator(int num) {
    char chars[] = "abcdefghijklmnñopqrstuvwxyzABCDEFGHIJKMNÑOPQRSTUVWXYZ!#$&/()='?¡¿\\+*~}]`{[^<>-_.:,;|°¬";
    char* password = (char*)malloc((num + 1) * sizeof(char));

    for (int i = 0; i < num; i++) {
        int random_index = rand() % (sizeof(chars) - 1);
        password[i] = chars[random_index];
    }
    password[num] = '\0'; // Null-terminate the string
    return password;
}

int main() {
    srand(time(NULL));

    char opc = 'Y';
    while (opc != 'N' && opc != 'n') {
        int num;
        printf("Write the num of characters: ");
        scanf("%d", &num);
        
        char* generated_password = password_generator(num);
        printf("Your password is: %s\n", generated_password);
        free(generated_password);

        printf("Continue? Y/N ");
        scanf(" %c", &opc);
    }

    printf("Press any letter from the keyborad...\n");
     _getch();

    return 0;
}
