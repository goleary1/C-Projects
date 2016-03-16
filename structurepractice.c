#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

struct Album {
	char *name;
	char *date;
	char *artist;
};

void printAlbum(struct Album *alb);

int main(void)
{
	/* Declare a struct TPAB and assign it's variable values */
	struct Album *TPAB = malloc(sizeof *TPAB);
	assert(TPAB != NULL);
	TPAB -> name = "To Pimp a Butterfly";
	TPAB -> date = "2015";
	TPAB -> artist = "Kendrick Lamar";
	
	/* Declare a struct Pablo and assign it's variable values */
	struct Album *Pablo = malloc(sizeof *Pablo);
	assert(Pablo != NULL);
	Pablo = (struct Album*)malloc(sizeof(struct Album));
	Pablo -> name = "The Life of Pablo";
	Pablo -> date = "2016";
	Pablo -> artist = "Kanye West";
	
	/* Use a function to print the Album's information */
	printAlbum(TPAB);
	printAlbum(Pablo);
	
	return 0;
}

/* Simple void function that accesses the structure Album, and print's the info */
void printAlbum(struct Album *alb)
{
	printf("Name: %s\n", alb -> name);
	printf("Date: %s\n", alb -> date);
	printf("Artist: %s\n", alb -> artist);
	printf("Location: %p\n", (void*)&alb);
	printf("------------------------\n");
}

