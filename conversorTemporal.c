#include <stdio.h>

int main() {
    int segundos, minutos, horas;

    printf("Quantos segundos foram cronometrados? ");
    scanf("%i", &segundos);

    horas = segundos / 3600;
    segundos -= (3600 * horas);
    minutos = segundos / 60;
    segundos -= (60 * minutos);
    
    printf("O tempo cronometrado foi: ");
    if(horas >= 10) {
        printf("%ih ", horas);
    } else {
        printf("0%ih ", horas);
    }
    
    if(minutos >= 10) {
        printf("%imin ", minutos);
    } else {
        printf("0%imin ", minutos);
    }
    
    if(segundos >= 10) {
        printf("%is", segundos);
    } else {
        printf("0%is", segundos);
    }

    return 0;
}