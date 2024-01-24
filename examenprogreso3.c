#include <stdio.h>
struct producto//declaramo la funcion esttuct con sus datos
{
    char codigo[25];
    char nombreProd[50];
    char descPrdocuto[50];
    int cantidad;
    float precioCompra;
};
int main()
{
    //ingresamos las instrucciones uqe usaremos en el menu como datos generales
    int opcion;//declarmos las opciones que usaremos para el menu que seran 3
    struct producto prod;//declaramos la estructura para solo mostrar los datos declarados 
    do
    {
        printf("\nMENU\n");//creamos la opcion menu con 3 opciones
        printf("1. Ingresar datos del producto\n");
        printf("2. Mostrar datos del producto\n");
        printf("3. Guardar en archivo y salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);//creamos la opciones que seran 3 en este ejercicio

        switch (opcion)//creamos las opciones para que puedan escogen eligiendo del 1 al 3
        {
        case 1:
            printf("Ingrese el nombre del producto:\n ");//pedimos el ingreso del nombre del prodcuto
            scanf("%s", prod.nombreProd);//llamamos a la strutura producto abreviada con produc
            break;

        case 2:
            printf("Ingrese la cantidad :\n ");//mostrar los datos del proudcto
            scanf("%s", prod.descPrdocuto);
            break;

        case 3:
            
            printf("Guardado en archivo I Saliendo del programa.\n");//finalizamos el programa y salimos
            break;

        default:  
            printf("Selecciono un numero no correcto en el menu. Intente de nuevo.\n");//si la tecla no fue 3 se le avisa al usario que solo pueden ser 3 opciones
        }  
           
           

    } while (opcion != 3);// verificamos la condición que solo sera menor o igual 3
    return 0;
}
void guardar(struct producto *prod){ //creamos una funcion de no retorno de datos declaraon la varible de guardar
    FILE *archivo = fopen("productos.txt", "w");//Creamos el nombre del archivo con el nombre del archivo txt 
    if (archivo == NULL)//verifación  la exitencia del archivo
    {
        printf("Error al abrir el archivo.\n");
        return;
    } //el dato void nos dara una explicacion del dato de no retorno que se ingresa
}
