#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int intentos=0, correct=0, i;
	char pswr[] = "aaaa", usr[4];
	
	
	do{
		printf("Digite su contraseña\n");
		scanf(" %s",&usr);
		int p=sizeof(pswr), u=sizeof(usr);
		while (p==u){
		
			for(i=0;i<4;i++){
				if(usr[i]==pswr[i]){
					correct++;
				}
			}
			if(correct==4){
				printf("Su contraseña es correcta\n");
				return 0;
			}else{
				printf("Contraseña incorrecta, intente de nuevo\n");
			}
		}
		if(p!=u){
			printf("Contraseña Incorrecta, intente de nuevo\n");
		}
		intentos++;
	}while (intentos<3);
	
	return 0;
}
