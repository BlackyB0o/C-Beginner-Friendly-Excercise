#include <stdio.h>
int main(){
	int secret_Num = 7;
	int guess_Num;
	
	printf("Guess the secret number!(Between 1-10) : ");
	scanf("%i",&guess_Num);
	
	while(guess_Num != secret_Num){
		if(guess_Num < 1 || guess_Num > 10){
			printf("Invalid Input,Please enter the number between 1-10.\n");
			printf("Guess the secret number!(Between 1-10) : ");
			scanf("%i",&guess_Num);
			continue;
		}
		
		if(guess_Num > secret_Num){
			printf("Too high! Try again.\n");
		}
		else if(guess_Num < secret_Num){
			printf("Too low! Try again.\n");
		}
		printf("Guess the secret number!(Between 1-10) : ");
		scanf("%i",&guess_Num);
	}
	
	printf("Congrat! you guessed the secret number!\n");	
	return 0;
}
