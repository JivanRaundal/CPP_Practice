/* Project 1 Guessing Game.
generate a random number and guess it, if guessed no. is greater than the generated no. print No. is greater
plz enter lower no. and if guessed no. is lower than generated no. print no. is lower plz enter greater no. 
and if guess is correct print "YOU WIN!!!" and print the no. of guesses.
*/

#include<stdio.h>
#include<stdlib.h>    // for rand() fn
#include<time.h>      // for time() fn

int main()
{
	int num, guess, guess_count=1;
	srand(time(0));            // to generate time in seconds
	num = rand()%100+1;       // to generate random number between 1 to 100  // rand() fn generates random no.
    //printf("\nThe Number is %d", num);
	
	do{
		printf("\nGuess the number between 1 to 100: ");
		scanf("%d", &guess);
		
		if(guess>num)
		{
			printf("Enter Lower Number Please!");
		}
		else if(guess<num)
		{
			printf("Enter Higher Number Please!");
		}
		else
		{
			printf("\nYOU WIN!!!");
			printf("\nYou Guess the number in %d attempts", guess_count);
		}
		guess_count++;
	}while(guess!=num);
	
	return 0;
}


