#include <stdio.h>
#include"include/Person.h"
#include<string>
#include<iostream>

using namespace std;

int main(int argc, char** argv){

    Person per(25);
    int age = per.getAge();
    cout<<"[age] = "<<age<<endl;
    return 0;
}