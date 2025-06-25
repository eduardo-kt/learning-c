#include <stdio.h>
#include <stdbool.h>

int main() {
    int age = 0;

    printf("Insert your age: \n");
    scanf("%d", &age);

    bool is_student = true;

    if(age >=18) { // condições executadas em ordem. ordem importa.
        if(is_student) {
            printf("You are an adult,\n");
            printf("and you study.");
        }
        else {
            printf("An adult that does not study");
        }
        
    }
    else if(age ==18) {
        printf("You are 18 years");
    }
    else {
        printf("You are a child");
    }

    return 0;
}