#include"../include/myTestLib.h"
#include<string>
#include<iostream>

using namespace std;

#define LIB_VERSION     "v1.0.0"

void printVerson(){

    cout<<LIB_VERSION<<endl;

}

string getVerson(){

    return string(LIB_VERSION);
}