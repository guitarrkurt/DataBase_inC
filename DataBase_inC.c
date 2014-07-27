#include <stdio.h>
#include <string.h>

#define tam 50
#define tamBase 5


struct persona
{
	char nombrePila[tam];
	char apellido[tam];
};
void une(char n1[tam], char n2[tam])
{
	char *space = "  ";
	
	strcat(n1, space);
	strcat(n1, n2);
}
/*-------------------------------------------------------------------------------------*/
int* existenHermanos(struct persona array[tamBase])
{
	//Lo limpiamos
	for(int i = 0; i < tamBase; i++)
	{
		arrayAux[i] = 0;
	}
	//Comparamos
	for(int j = 0; j < tamBase; j++ )
	{
		for(int i = 0; i < tamBase; i++)
		{
			if(j != i)
			{
				printf("%s es igual que %s\n",array[j].apellido, array[i].apellido );
				if( strcmp(array[j].apellido, array[i].apellido) == 0)
				{
					printf("Si\n");
					arrayAux[i] = 1;
				}else{
				printf("No\n");
		
				}
			}

		}
	}
	return &arrayAux[0];
}

/*-----------------------------------------------------------------------------------*/
int main(int argc, char *argv[]) 
{
	int arrayAux[tamBase];
	//Creamos un arreglo de 5 personas
	struct persona BaseDatos[tamBase];
	
	for(int i = 0; i < tamBase; i++)
	{
		//Recordar que %s finaliza hasta encontrar el caracter espacio
		printf("Ingresa el nombre de la persona %d\n", i);
		scanf("%s", &BaseDatos[i].nombrePila[0]);
		//scanf("%s", &person1.nombrePila[0]);
		printf("Ingresa el apellido de la persona %d\n", i);
		//scanf("%s", persona1.apellido);
		scanf("%s", BaseDatos[i].apellido);
		
		//une(person1.nombrePila, person1.apellido);
		une(BaseDatos[i].nombrePila, BaseDatos[i].apellido);
	}
	//Se puede mostrar la base
	
	//Buscamos quienes hermanos
	int *hermanos = existenHermanos(BaseDatos);

	//Imprimimos los hermanos
	
	for(int i = 0; i < tamBase; i++)
	{
		if(*(hermanos+i) == 1)
			printf("%s tiene hermanos en la empresa\n", BaseDatos[i].nombrePila);

	}	
}