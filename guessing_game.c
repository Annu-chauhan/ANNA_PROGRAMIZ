#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));

    
    printf("WELCOME TO THE WORLD OF GUESSING NUMBERS\n");
    random = rand() * 100 + 1; // guessing b/w 0 to 100
    do{
        printf("\nPlease enter your guess between (1 to 100): ");
        scanf("%d, &guess");
        n0_of_guess++;

        if(guess < random){
            printf("guess a larger number. \n");
           } else if (guess > random){
               printf("guess a smaller number. \n"); 
            }
            else {
                 printf("congratualtions !! you have sucessfully guested the number in %d attempts", no_of_guess");
            }
        
    }while(guess != random);
} printf("\n bye bye , thanks for playing."); 
printf("\n Developed by @chauhanparul");
            }