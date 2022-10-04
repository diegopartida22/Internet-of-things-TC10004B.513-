#include <stdio.h>

int main(){
    // Clona la ejecución
    printf("Prueba \n");
    int pid = fork();

    if(pid == 0){
        printf("Soy el proceso hijo \n");
        sleep(10);
        printf("Ya termine");
    }
    else{
        printf("Soy el proceso padre \n");
        sleep(10);
        printf("Ya termine padre");
    }
    return 0;
}

// ls
// gcc -o fork fork.c
// ./fork