
#include "Serie.h"
#include <string.h>

void inicializarSeriesEstado(eSerie series[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        series[i].estado = 0;
    }


}


void inicializarSeriesHardCode(eSerie series[])
{
    int idSerie[5] = {100,101,102,103,104};
    char nombre[][50]={"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50]={"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidadTemporadas[5] = {10,9,7,5,2};

    int i;


    for(i=0; i<5; i++)
    {
        series[i].idSerie=idSerie[i];
        series[i].cantidadTemporadas=cantidadTemporadas[i];
        series[i].estado = 1;
        strcpy(series[i].nombre, nombre[i]);
        strcpy(series[i].genero, genero[i]);
    }
}


void mostrarListaSeries(eSerie series[], int cant)
{
    int i;



    for(i=0; i<cant; i++)
    {
        if(series[i].estado==1)
        {
            printf("%5d %20s %5s %d\n", series[i].idSerie, series[i].nombre, series[i].genero, series[i].cantidadTemporadas);
        }
    }
}



