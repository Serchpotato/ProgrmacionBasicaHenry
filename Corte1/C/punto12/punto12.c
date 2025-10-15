#include <stdio.h>
#include <stdlib.h>

int n;
int m=0;
int r;
int main(int argc, char *argv[]) {

        printf("Digite un numero para multiplicar\n\n");
        scanf("%d",&n);{
                while (m<=10){
                r=n*m;
                m++;
                printf("%d X %d = %d\n", n,m,r);
                }

        }
        return 0;
}
