#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
      char name[100];


    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);


    name[strcspn(name, "\n")] = '\0';

    printf("Hello, %s!\n", name);


    size_t length = strlen(name);
    printf("The length of your name is: %zu characters\n", length);
    return 0;
}
