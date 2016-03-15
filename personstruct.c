#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

void print_Person(struct Person *person);

struct Person {
	char *name;
	int age;
	int height;
	int weight;
};

struct Person *person_Create(char *name, int age, int height, int weight)
{
	struct Person *who = malloc(sizeof(struct Person));
	assert(who != NULL);

	who -> name = stdup(name);
	who -> age = age;
	who -> height = height;
	who -> weight = weight;

	return who;
}

int main()
{
	struct Person *gavin = person_Create("Gavin O'Leary", 15, 69, 140);
	struct Person *dan = person_Create("Dan O'Leary", 49, 74, 210);

	print_Person(dan);
	print_Person(gavin);

	return 0;
}

void print_Person(struct Person *person)
{
	name = person -> name;
	age = person -> age;
	height = person -> height;
	weight = person -> weight;

	printf("Name : %s\n Age: %d\n Height: %d\n Weight:%d\n", name, age, height, weight);
}

