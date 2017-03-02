//
//  main.c
//  XcodeCProgrammer
//
//  Created by admindyn on 2017/2/16.
//  Copyright © 2017年 admindyn. All rights reserved.
//
#include "Test.hpp"
#include "zhizhenvsrefrence.hpp"
#include "myc.h"
#include "sizeofint.h"
#include <stdio.h>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
#ifdef __cplusplus
    cout << "cout mytest extern ok " << endl;
    cout <<"Hello, World! c++\n" << endl;
#else
    printf("printf mytest extern ok n");
     printf("Hello, World! c language\n");
#endif
   
    sizeofFunc();
    constFunc();
    testInt();
    test();
    testTu();
    return 0;
}
