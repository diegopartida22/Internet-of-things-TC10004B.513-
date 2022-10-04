#include <stdio.h>
#include <unistd.h>

int main(){
    printf("Prueba \n");
    int pid = fork();

    if (pid == 0){
        printf("Soy el proceso hijo y me voy a convertir en ls\n");
        // reemplaza todo el codigo para ejecutar otro
        execl("/workspace/Internet-of-things-TC10004B.513/hola" , "holamundo", NULL);
        printf("Esto no debe ejecutarse");
    }
    else{
        printf("Soy el proceso padre\n");
    }
    return 0;
}