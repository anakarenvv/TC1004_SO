#include <pthread.h> //libreria para el hilo
#include <stdio.h>

int saldo;

void  * holaHilo(){
printf( "hola desde un hilo");
pthread_exit(NULL); //variable que tiene el dato que quiero mandar

}

void * incrementaSaldo(){
    printf("Saldo actual: %d\n", saldo );
    for(int j=0;j<100;j++){
        saldo++;
    }
}

int main(){
    saldo=0;

   pthread_t t;
   for(int i=0; i<100;i++){ //crear 100 hilos
   pthread_create(&t, NULL, holaHilo, NULL);
   pthread_create(&t, NULL, incrementaSaldo, NULL);
   }
   pthread_exit(NULL); //lo recibe
    return 0;
}

