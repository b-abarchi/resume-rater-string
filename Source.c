
//***********************************************
// BELLO ABARCHI
// Resume Rater String Assignment
//***********************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//FUNCTION PROTOTYPE
main() {
	char keyword[2050];
    char keywords[50][40] = { {0} };
	char resume[100000];
	char text[356][20] = { {0} };
	int word = 0;
	int letter = 0;
	int i;
	int j;
	int rWord = 0;
	int rLetter = 0;
	FILE *pRead = 0; 
	pRead = fopen("keywords.txt","r");
	if (pRead == NULL)
	{
		printf("The file does not exist");
		system("pause");
		return 0;
	}

	
	
	j = 0;
	while (keyword[j] != '\0') {
		if (keyword[j] != ',') {
			keywords[word][letter] = keyword[j];
			letter++;
		}
		else {
			word++;
			letter = 0;
		}
		j++;
	}
	

	pRead = fopen("resume.txt", "r");
	if (pRead == NULL)
	{
		printf("The file does not exist");
		system("pause");
		return 0;
	}


	fscanf(pRead, "%s", resume);
	i = 0;
	while (text[i] != '\0') {
		if (text[i] != '\0') {
			text[rWord][rLetter] = resume[i];
			rLetter++;
		}
		else {
			rWord++;
			rLetter = 0;
		}
		i++;
	}

	system("pause");

}//end of main
