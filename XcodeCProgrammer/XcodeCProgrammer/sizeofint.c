//
//  sizeofint.c
//  StudyC
//
//  Created by admindyn on 2017/2/16.
//  Copyright © 2017年 admindyn. All rights reserved.
//

#include "sizeofint.h"
void sizeofFunc () {
    int a[10];
    int * ptr;
    printf("sizeof(a) = %lu\n",sizeof(a));
    printf("sizeof(a[10]) = %lu\n",sizeof(a[10]));
    printf("sizeof(a[100]) = %lu\n",sizeof(a[100]));
    printf("sizeof(a[1]) = %lu\n",sizeof(a[1]));
    printf("sizeof(ptr) = %lu\n",sizeof(ptr));
    printf("sizeof(*ptr) = %lu\n",sizeof(*ptr));
    //使用%lu 而不用%d
    
}
