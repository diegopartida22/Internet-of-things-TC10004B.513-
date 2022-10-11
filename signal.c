#include <stdio.h>
#include <signal.h>
#include <unistd.h>
int con;

void holaMundo(int signalNumber) {
    if (signalNumber == 10) {
        printf("Es la señal 10\n");
        con = 2;
    } else {
        printf("Es otra señal");
    }
}

void noMeMates(int sig) {
    printf("jaja, no me matas\n");
}

int main() {
    signal(12,holaMundo);
    signal(10,holaMundo);
    signal(2, noMeMates);
    con = 1;

    while(1) {
        printf("Estoy trabajando\n");
        sleep(1);
    }
    printf("Nunca llega\n");
    return 0;
}