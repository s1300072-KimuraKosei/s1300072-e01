#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define min 1
#define max 6

int main() {
int sum=0;
int dice[2];
    
    srand(time(NULL));
    
    printf("Rolling dice...\n");
        for(int i=0; i < 2; i++){
            dice[i] = (rand() % max) + min;
    
            printf("Die %d:%d\n",(i+1),dice[i]);

            sum = sum + dice[i]; 
            }  
        {
    printf("Total value:%d\n",sum);
        return 0;
    }
}
