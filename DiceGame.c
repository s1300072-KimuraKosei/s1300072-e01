#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define min 1
#define max 6

int main() {
int sum=0;
int dice[2];
char name[100];
    srand(time(NULL));
    printf("What you are name?\n >");
    scanf("%s",name);
    printf("Hello,%s!\n",name);
    printf("Rolling dice...\n");
        for(int i=0; i < 2; i++){
            dice[i] = (rand() % max) + min;
    
            printf("Die %d:%d\n",(i+1),dice[i]);

            sum = sum + dice[i]; 
            }  
        {
    printf("Total value:%d\n",sum);
            if(sum > 7){
                printf("You won\n");
            }
            else printf("You lost\n");
        return 0;
    }
}
