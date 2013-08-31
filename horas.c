#include <stdio.h>
#include <string.h>

int main()
{
	int angulo, i, minuto[60], aux;
	int resp;
		
	//angulo por minuto
	for(i=0;i<=60;i++)
	{
		minuto[i]=6*i;
	}
	
	/*for(i=0;i<=60;i++)
	{
		printf("%d\t",minuto[i]);
	}*/
	
	printf("Como despues del angulo 180 se repiten solo se tomaran los del 0 a 180\n\n");
	do
	{
		printf("\tQue angulo desea buscar?  ");
		scanf("%d",&angulo);
		if (angulo<=180&&angulo>=0)
		{
			aux=minuto[0];
			
			for(i=0;i<60;i++)
			{
				if(angulo==minuto[i])
				{
					aux=minuto[i];
				}
			}
			
			if(angulo==aux)
				{
					printf("\t\tY");
				}
				else
					printf("\t\tN");
		}
		else if(angulo<0&&angulo>180)
		{
			printf("El angulo se repite, ingresa uno valido!!!\n");
		}
		printf("\nDesea buscar otro angulo? 1-si / 2-no => ");
		scanf("%d",&resp);
	}while(resp==1);
	getchar();
}