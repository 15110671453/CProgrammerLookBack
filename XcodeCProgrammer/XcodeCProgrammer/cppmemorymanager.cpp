//
//  cppmemorymanager.cpp
//  XcodeCProgrammer
//
//  Created by admindyn on 2017/2/28.
//  Copyright © 2017年 admindyn. All rights reserved.
//

#include "cppmemorymanager.hpp"
/*
 什么是内存管理
 第一 什么是内存的本质
 内存 就是资源
 第二 谁掌管资源 
 操作系统
 第三 我们需要做什么
 申请 和 归还 资源
 
 内存的申请 与 释放
 
 申请内存  使用 运算符 new
 
 释放内存 使用 运算符 delete
 
 int*p = new int;
 
 申请和释放某一个类型的内存
 
 如何申请和释放一个块内存呢
 
 int* arr = new int [10];申请块内存
 
 delete []arr;释放内存 注意 在delete后加中括号在加要释放的指针
 
 
 内存管理的其他方式
 
 c 语言中 使用
 
 void * malloc(size_t size)
 
 void free(void* memblock)
 
 c++ 语言中 使用 new 与 delete
 
 需要注意 申请和释放内存的方式 要配套使用
 
 
 思考： 申请内存是否一定成功
 
 不一定  内存耗尽时 不成功
 
 申请内存注意事项
 int *p = new int[1000];
 需要检测申请后是否为NULL 来判断是否申请成功
 
 int * p = new  int ;
 
 if (NULL == p)
 {
 //内存分配失败 处理异常
 }
 delete p;//内存释放后 将指针置为NULL 避免第二次释放 造成程序一场
 p=NULL;
 
 
 
 */
