#include <stdio.h>
#define TAMV(v) sizeof(v) / sizeof(v[0])
#define TRUE 1;
#define FALSE 0;
int main()
{
    int target;

    printf("Por favor, ingresa el número que quieres encontrar: ");

    scanf("%d", &target);

    int encontrado = FALSE;
    int v[] = {11, 22, 33, 44, 55, 66,77,88,99};
    int tamaño= TAMV(v);
    int ac = 0;
    int record = 0;
     //Buscar
     for (int j = 0; j < TAMV(v); j++)
     {
         if (v[j] == target)
         {
             encontrado=TRUE
             printf("Presente en la posición: %d\n", j);
            
         }
         if (!encontrado)
         {
             ac++;

         }
         if(ac==TAMV(v)){
             printf("No encontrado\n");
         }
     }
     //Máximo
     for(int i=0; i < TAMV(v);i++){
         if(v[i]>record){
             record= v[i];
         }
     }
     printf("El número máximo del vector es: %d\n", record);
     //Mínimo
     for(int i=0; i < TAMV(v);i++){
         if(v[i]<record){
             record= v[i];
         }
     }
     printf("El número mínimo del vector es: %d\n", record);
    //Media
    for(int i=0; i < TAMV(v);i++){
        ac= ac + v[i];
      
    }
     ac= ac/tamaño;
    printf("La media del vector es: %d\n", ac);
}