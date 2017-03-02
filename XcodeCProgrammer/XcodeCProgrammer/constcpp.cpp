//
//  constcpp.cpp
//  XcodeCProgrammer
//
//  Created by admindyn on 2017/2/28.
//  Copyright © 2017年 admindyn. All rights reserved.
//

#include "constcpp.hpp"

/*
 const  关键字 是来控制 变量 是否可以变化的
 */

void testcppConst()
{
    //const  与 基本数据类型
    int x = 3;//没有 const 定义一个整形的x变量 它的存储空间内容是3 变量x 存储地址&x
    const int y = 3;
    
    // 加了const 后 由一个变量转为常量 内存表示一致 但是无法修改
    
    //const 与 指针类型
    
    const int * p1 =NULL;
    int const * p2 =NULL;
    //上面 两种情况等价的
    //因为 上面的 都是指针可以变 但是指针指向的内容无法修改
    int * const p3 =NULL;
    
    int xp =3;
    const int * p = &xp;
    //p = &y;正确
    //*p =4 ;错误的
    
    //看内存情况
    /*
     变量名    存储地址   存储内容
     xp          &xp      3
     p            &p     &x
     */
    
    
    //const 与指针类型
    
    int xpp =3;
    int * const pp =&x;
    //pp = &y;错误
    //*pp =4 ;正确的
    
    //看内存情况
    /*
     变量名    存储地址   存储内容
     xp          &xp      3
     p            &p     &x
     */
    
    
    //const 与 引用
    
    int xxx =3;
    const int &yy =x;
    //xxx=10 正确  // yy=20 错误
    
    
    
}
