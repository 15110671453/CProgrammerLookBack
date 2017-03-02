//
//  zhizhenvsrefrence.cpp
//  XcodeCProgrammer
//
//  Created by admindyn on 2017/2/28.
//  Copyright © 2017年 admindyn. All rights reserved.
//


#include "zhizhenvsrefrence.hpp"
using namespace std;
//基本数据类型的引用

void test()
{
      std::cout << "c++  func 指针 与 引用部分"<<std::endl;
    int a =3;
    int &b=a;//引用必须初始化 否则编译报错
    b=10;
    //对引用任何操作就是对变量进行操作
    cout<< a <<endl;
    cout<< b <<endl;
}

//结构体类型的引用
typedef struct {
    int x;
    int y;
}Coor;
void testYinYong()
{
    Coor c1 ;
    Coor &c =c1;//引用必须初始化
    c.x=10;
    c.y=20;
    
   
}
//指针类型的引用  类型 *&指针引用名 =  指针变量名

void  testZhiZhenYinYong()
{
    int a = 10;
    int * p = &a;
    int *&q = p;
    
    *q =20;
    
    //如果对q操作 就相当于将20 给了*p 也就操作到了a
    
}

//引用 作为函数参数

int x = 10 , y =20;
void fun(int * a,int * b)
{
    int c =0;
    c =*a;
    *a = *b;
    *b =c;
}
//fun(&x,&y)

void fun2(int &a,int &b)
{
    int c =0;
    c = a;
    a = b;
    b = c;
}
//使用引用 func2(x,y)

int testInt (void)
{
    std::cout << "c++  func 指针 与 引用部分"<<std::endl;
    int a = 10;
    int  &b = a;
    b = 20 ;
    std::cout << b<<std::endl;
    
    system("pasuse");
    return 10;
}



