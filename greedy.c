#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) 
{
	// Declare and intialize variables
	float changeInput;
	int coinCount = 0;
	
	// Grab user input, check it and ask for retry if not within bounds  
	do {
		printf("The total amount owed:");
		changeInput = GetFloat();
		if(changeInput <= 0){
		    printf("Change must be positive! Try again\n");
		    }
		}   while (changeInput < 0);
	
	int changeCents = roundf(((changeInput *100)));
	
	//Start with the largest coin and work your way down
	while (changeCents >= 25) {
	    changeCents -= 25;
	    coinCount++;
	}
	while (changeCents >= 10) {
	    changeCents -= 10;
	    coinCount++;
	}
	
	while (changeCents >=5) {
	    changeCents -= 5;
	    coinCount++;
	}
	
	while (changeCents >= 1) {
	    changeCents -= 1;
	    coinCount++;
	}
	
	printf("I owe you this many coins: %d\n", coinCount);
}
