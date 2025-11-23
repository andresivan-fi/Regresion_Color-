#include <stdio.h>

//Estructuras 
typedef struct {
    float cian; // color cian
    float magenta; //color magenta 
    float amarillo; //color amarillo 
    float negro; //color negro 
} CMYK_2;

typedef struct {
    int rojo;  //color rojo 
    int verde; //color verde 
    int azul;  //color azul 
} RGB_2;





//Declaraciones de funciones 
CMYK_2 RegistrodeColores(CMYK_2 datos);
RGB_2 ConversionCMYKaRGB(CMYK_2 *colorCMYK, RGB_2 conversion);



//Declaraciones  de procedimientos 





//Declaacions globales 
CMYK_2 *colorCMYK; //puntero 
CMYK_2  datos; // variable utilizada en la función Registro de colores 
RGB_2 *colorRGB; // puntero para el color RGB 
RGB_2 conversion; //variable utilizada en la funcion de conversionCMYKaRGB





//algoritmo 
int main (void)
{
    //Declaraciones locales
    colorCMYK = &datos;
    colorRGB = &conversion;
    //Algoritmo 
    datos = RegistrodeColores(datos);
    conversion = ConversionCMYKaRGB(colorCMYK,  conversion);
    puts("Su color en RGB es:");
    printf("Rojo %d, verde %d, y azul %d", (*colorRGB).rojo, (*colorRGB).verde, (*colorRGB).azul);


    return 0;
}

CMYK_2 RegistrodeColores(CMYK_2 datos)
{
    //Declaracion local
    
    //algoritmo 
    datos.cian=0.0;
    datos.magenta=0.00;
    datos.amarillo=01.00;
    datos.negro=0.00;

    return datos;
}

RGB_2 ConversionCMYKaRGB(CMYK_2 *colorCMYK, RGB_2 conversion)
{
    //Declaración de variables locales. 


    //algoritmo 
    conversion.rojo=255*(1-(*colorCMYK).cian)*(1-(*colorCMYK).negro);
    conversion.verde=255*(1-(*colorCMYK).magenta)*(1-(*colorCMYK).negro);
    conversion.azul=255*(1-(*colorCMYK).amarillo)*(1-(*colorCMYK).negro);


    return conversion;
}