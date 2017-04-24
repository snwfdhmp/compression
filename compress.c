#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int addLenToStr(int len, char* tab) {
	unsigned int i, taille = strlen(tab);
	char* save = (char*) malloc(sizeof(char)*taille+1);

	for (i = 0; i < taille; ++i)
		save[i] = tab [i];

	tab = (char*) malloc(sizeof(char)*(taille+len));

	for (i = 0; i < taille; ++i)
		tab[i] = save [i];

	return taille;
}

int main(int argc, char const *argv[])
{
	unsigned int i;
	char input[8000], *output, c;

	for (i = 0; i < 20; ++i)
		addLenToStr(2, output);
		output[i]='A';

	output[20] = '\0';

	printf("%s\n", output);

	return 0;
}