
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Person {
    char name[50];
    int age;
    struct Person *father;
    struct Person *mother;
} Person;


Person *create_person(void)
{
    Person *person = malloc(sizeof(Person));

    if (person == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    person->father = NULL;
    person->mother = NULL;

    return person;
}
void read_person_info(Person *person)
{
    printf("Enter name: ");

    if (fgets(person->name, sizeof(person->name), stdin) == NULL) {
        printf("Error reading name.\n");
        exit(EXIT_FAILURE);
    }

    person->name[strcspn(person->name, "\n")] = '\0';

    printf("Enter age: ");

    if (scanf("%d", &person->age) != 1) {
        printf("Invalid age.\n");
        exit(EXIT_FAILURE);
    }

    getchar();
}

int main(void)
{
    Person *paternal_grandfather = create_person();
    Person *paternal_grandmother = create_person();
    Person *maternal_grandfather = create_person();
    Person *maternal_grandmother = create_person();
    Person *father = create_person();
    Person *mother = create_person();
    Person *self = create_person();

    printf("\n--- Paternal Grandfather ---\n");
    read_person_info(paternal_grandfather);

    printf("\n--- Paternal Grandmother ---\n");
    read_person_info(paternal_grandmother);

    printf("\n--- Maternal Grandfather ---\n");
    read_person_info(maternal_grandfather);

    printf("\n--- Maternal Grandmother ---\n");
    read_person_info(maternal_grandmother);

    printf("\n--- Father ---\n");
    read_person_info(father);

    printf("\n--- Mother ---\n");
    read_person_info(mother);

    printf("\n--- Yourself ---\n");
    read_person_info(self);

    return 0;
}
 
