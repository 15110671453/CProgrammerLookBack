//
//  myc.c
//  StudyC
//
//  Created by admindyn on 2017/2/16.
//  Copyright © 2017年 admindyn. All rights reserved.
//

#include "myc.h"
void constFunc ()
{
    char static data_var ='c';
    char const data_const ='b';
    //p1指针变量 p1不可以修改 但是 p1 指向的内容可以修改
    char * const p1 =&data_var;
    *p1  = 'p';
    //p2指针变量 p2可以修改 但是 p2 指向的内容不可以修改
    const char * p2 = &data_const;
    p2 = &data_var;
    printf("const 在C语言中的使用");
}
