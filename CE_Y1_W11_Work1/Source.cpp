#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void checkLetter(char,int*,int*);

int main() {
	char str[1000];
	int i = 0;
	int upper = 0, lower = 0;
	scanf("%[^\n]", &str);
	while (str[i] != '\0')
	{
		checkLetter(str[i],&upper,&lower);
		i++;
	}
	printf("Capital letter = %d\nLower-case letter = %d", upper, lower);
}

void checkLetter(char str,int* upper,int* lower) {
	if (str >= 'A' && str <= 'Z')
	{
		++*upper;
	}
	else if (str >= 'a' && str <= 'z')
	{
		++*lower;
	}
}

