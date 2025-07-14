#include <stdio.h>

int main() {
    char nameInitial = 'K';            
    int age = 20;                     
    float weight = 48.50;              
    char gender[] = "Female";          

    
    printf("nameInitial = %c\n", nameInitial);
    printf("age = %d\n", age);
    printf("weight = %.2f\n", weight);
    printf("gender = %s\n", gender);

    return 0;
}