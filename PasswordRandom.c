#include <stdio.h>
#include <time.h>
#include "keyboardHash.h"

#define APP_VERSION "v1.0"
#define MIN_LENGHT_PASSWORD 4
#define MAX_LENGHT_PASSWORD 516

int stringLen;
int chooseUser;
int randomNumer[MAX_LENGHT_PASSWORD];
char passwordGenerated[MAX_LENGHT_PASSWORD];



int main()
{
	printf("#######################################\n");
	printf("# Welcome to password generator %s #\n", APP_VERSION);
	printf("#######################################\n");

	printf("Select option: \n");
	printf("1. Generate new password");
	printf("2. Exit");
	scanf_s("%d", &chooseUser);

	if(chooseUser == 1)
	{
		srand(time(NULL));
		printf("Enter password lenght: ");
		scanf_s("%d", &stringLen);
		if (stringLen >= 516)
		{

		}
		for (int i = 0; i < stringLen; i++)
		{
			
			randomNumer[i] = rand() % 45;
		}
	
		printf("\n");
		for (int y = 0; y < stringLen; y++)
		{
			int number;
			number = randomNumer[y];
			passwordGenerated[y] = hash(number);
		}

		for(int a = 0; a < stringLen; a++)
		printf("%c", passwordGenerated[a]);
		
		
	}
	else if(chooseUser == 2)
	{
		
		return 0;
	}



	return 0;
}