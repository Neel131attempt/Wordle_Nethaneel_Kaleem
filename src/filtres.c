#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"getBDD.h"

// char lettreUtilise[]; 

void filtre(int lettreTrouve,int lettrePasCount, int bonPlacement[5] ,char* bddName,char* lettreBon[5],char*lettreMauvaise[21] , char* words[TOTAL_WORDS][MAX_WORD_LENGTH]){
FILE* bdd_file=NULL;
int motSuggere = 0;

	bdd_file=fopen(bddName,"r");
	if(bdd_file==NULL)
	{
		printf("not able to open File");
		exit(0);
	}
	printf("mots suggerer : ");
for(int i=0;i<TOTAL_WORDS;i++)
	{
	motSuggere = 0;
	for(int i=0;i<MAX_WORD_LENGTH-1;i++)
	{
		for(int j=0;j<lettreTrouve;j++)
		if(words[i]==lettreBon[bonPlacement[j]])
		{
			for(int k=0; k<lettrePasCount;k++)
			if (words[i]==lettreMauvaise[k])
			{
				motSuggere=1;


		}
	}
	if (motSuggere == 1);
	{
		printf("%s "words[i]);
	}
	}
}
return 0;
}	
