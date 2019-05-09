#include <stdio.h>
#include"include/Person.h"

int main(int argc, char** argv){

    Person per(25);
    int age = per.getAge();
    printf("[age] = %d\n", age);
    return 0;
}