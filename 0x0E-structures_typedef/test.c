#include <stdio.h>

struct dog {
    char* name;
    int age;
    char* breed;
};

void print_dog(struct dog *d) {
    if (d == NULL) {
        return; // If d is NULL, do nothing
    }

    printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
    printf("Age: %d\n", d->age);
    printf("Breed: %s\n", (d->breed != NULL) ? d->breed : "(nil)");
}

int main() {
    struct dog my_dog = {
        .name = "Buddy",
        .age = 3,
        .breed = NULL
    };

    struct dog *ptr_dog = &my_dog;

    print_dog(ptr_dog);

    return 0;
}

