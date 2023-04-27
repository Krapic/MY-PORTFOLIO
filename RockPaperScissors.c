#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int main()
{ 	start:
	srand(time(NULL));
	int playerThrow = 0, aiThrow = 0;
	printf("Select your throw:\n");
	printf("1) Rock\n");
	printf("2) Paper\n");
	printf("3) Scissors\n");
	printf("\nSelection: ");
	scanf("%d", &playerThrow);
	aiThrow = (rand() % 3) + 1;
	printf("____________________________\n\n");
	if (aiThrow == ROCK && playerThrow == SCISSORS)
	{
		printf("Computer selected Rock!\n\nYOU LOST!\n");
	}
	if (aiThrow == PAPER && playerThrow == ROCK)
	{
		printf("Computer selected paper!\n\nYOU LOST!\n");
	}
	if (aiThrow == SCISSORS && playerThrow == PAPER)
	{
		printf("Computer selected scissors!\n\nYOU LOST!\n");
	}
	if (playerThrow == ROCK && aiThrow == SCISSORS)
	{
		printf("Computer selected scissors!\n\nYOU WIN!\n");
	}
	if (playerThrow == PAPER && aiThrow == ROCK)
	{
		printf("Computer selected rock!\n\nYOU WIN!\n");
	}
	if (playerThrow == SCISSORS && aiThrow == PAPER)
	{
		printf("Computer selected paper!\n\nYOU WIN!\n");
	}
	if (aiThrow == playerThrow)
	{
		printf("DRAW!\n");
	}
	printf("____________________________\n\n");
	goto start;
	return 0;
}