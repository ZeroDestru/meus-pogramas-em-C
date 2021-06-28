#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

int main(void){

time_t t;

int num=1, num2=0, i, b;

srand((unsigned) time(&t));


b = (rand() % 20);

printf("%d", b);
    while(num2 < b){
	
    
        printf("\n hello World %d", num);

        num += 1;
        num2 += 1;

        if (num == 10)
            printf("\n ja esta irritando");
	}
    
    for (i = num; i < 30; i++){

        printf("\n vamos ver o que sai ? %d", rand() % 100);
    }

    getch();

return 0;
}
