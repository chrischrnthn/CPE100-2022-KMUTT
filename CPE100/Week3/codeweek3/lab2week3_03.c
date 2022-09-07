#include <stdio.h>
#include <string.h>
int main() {
	int decimalNum;
	char result[100];
	int hexadecimal[100];
	int i=0, j;
	
	printf("Enter any decimal number: ");
	scanf("%d",&decimalNum);

	do
	{
		hexadecimal[i] = decimalNum % 16;
		decimalNum /= 16;
		i++;
	}
	while(decimalNum > 0);

	printf("Equivalent hexadecimal value of decimal number %d: ", decimalNum);
	
	for (j = i -1 ; j>= 0;j--)
	{
		switch(hexadecimal[j])
		{
			case 0 : strcat(result, "0"); break;
			case 1 : strcat(result, "1"); break;
			case 2 : strcat(result, "2"); break;
			case 3 : strcat(result, "3"); break;
			case 4 : strcat(result, "4"); break;
			case 5 : strcat(result, "5"); break;
			case 6 : strcat(result, "6"); break;
			case 7 : strcat(result, "7"); break;
			case 8 : strcat(result, "8"); break;
			case 9 : strcat(result, "9"); break;
			case 10 : strcat(result, "A"); break;
			case 11 : strcat(result, "B"); break;
			case 12 : strcat(result, "C"); break;
			case 13 : strcat(result, "D"); break;
			case 14 : strcat(result, "E"); break;
			case 15 : strcat(result, "F"); break;
		}
	}
	printf("%8s\n", result);
	return 0;
}