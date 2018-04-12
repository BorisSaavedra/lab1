#include <stdio.h>

int main (void)
{
	float candidato1=0, candidato2=0, candidato3=0, nulo=0, votos=0, total=0, porcentaje1=0, porcentaje2=0, porcentaje3=0, votosnulos=0;
	char voto='a';
		
	while (voto!='f')
	{
		printf ("Ingrese voto: ");
		scanf ("%c", &voto);
		if (voto=='1'){
			candidato1=candidato1+1;
		}
		else if (voto=='2'){
			candidato2=candidato2+1;
		}
		else if (voto=='3'){
			candidato3=candidato3+1;
		}
		else{
			if(voto!='f')
				nulo=nulo+1;
		}
		while(getchar()!='\n');
		//~ printf ("Continuar?: ");
		//~ scanf ("%c", &final);
		votos++;
	}
	char porcent = '%';
	total=candidato1+candidato2+candidato3+nulo;
	porcentaje1= (candidato1/total) * 100;
	porcentaje2= (candidato2/total) * 100;
	porcentaje3= (candidato3/total) * 100;
	votosnulos= (nulo/total) * 100;
	
	if (candidato1>candidato2 && candidato1>candidato3){
		printf ("gana candidato1!\n ");
	}else{
		if (candidato2>candidato1 && candidato2>candidato3){
			printf ("gana candidato2!\n ");
		}else{
			if (candidato3>candidato2 && candidato3>candidato1){
				printf ("gana candidato3!\n ");
			}else{
					printf("empate!\n"); 
			}
		}
	}
	
	printf ("candidato 1: %.f votos (%.2f%c) candidato 2: %.f votos (%.2f%c) candidato 3: %.f votos (%.2f%c) votos nulos: %.f votos (%.2f%c)",candidato1,porcentaje1,porcent,candidato2,porcentaje2,porcent,candidato3,porcentaje3,porcent,nulo,votosnulos,porcent);
}	

