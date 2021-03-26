#include "../template.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tests.h"
int main(int argc, char *argv[])
{
    if(argc>1)
    {
        if (strcmp(argv[1], "0")==0){
            run();
        }else if (strcmp(argv[1], "1")==0){
           return subTest(3,6);
        }else if (strcmp(argv[1], "2")==0){
            return cubeTest(3);
        }else if (strcmp(argv[1], "3")==0){
            return minTest(3,6);
        }else if (strcmp(argv[1], "4")==0){
            return oddTest(3);
    }
}
}
int subTest(int a, int b){
    if (subf(a,b) == subm(a,b)){
        return 0;
    }
        return 1;
    }

int cubeTest(int a)
{
    if (cubef(a) == cubem(a)){
        return 0;
    }
    return 1;
}

int minTest(int a, int b){
    if (minf(a,b)==minm(a,b)){
        return 0;
        }
        return 1;

}

int oddTest(int a){
    if (oddf(a)==oddm(a)){
        return 0;
    }
    return 1;
}


