//
//  sizeofint.h
//  StudyC
//
//  Created by admindyn on 2017/2/16.
//  Copyright © 2017年 admindyn. All rights reserved.
//

/*
 1. extern "C"的真实目的是实现类C和C++的混合编程。extern “C”是由Ｃ＋＋提供的一个连接交换指定符号，用于告诉Ｃ＋＋这段代码是Ｃ函数。extern “C”后面的函数不使用的C++的名字修饰,而是用C。这是因为C++编译后库中函数名会变得很长，与C生成的不一致，造成Ｃ＋＋不能直接调用C函数。
 2.C++语言支持函数重载，C语言不支持函数重载。函数被C++编译后在库中的名字与C语言的不同。假设某个函数的原型为：void foo(int x, int y);该函数被C编译器编译后在库中的名字为_foo，而C++编译器则会产生像_foo_int_int之类的名字。C++提供了C连接交换指定符号extern“C”来解决名字匹配问题。
 3.被extern "C"限定的函数或变量是extern类型的；extern是C/C++语言中表明函数和全局变量作用范围（可见性）的关键字，该关键字告诉编译器，其声明的函数和变量可以在本模块或其它模块中使用。被extern "C"修饰的变量和函数是按照C语言方式编译和连接的。
 4.与extern对应的关键字是static，被它修饰的全局变量和函数只能在本模块中使用。因此，一个函数或变量只可能被本模块使用时，其不可能被extern “C”修饰。
 
 #ifdef __cplusplus
 extern "C" {
 #endif
 #ifdef __cplusplus
 }
 #endif
 */
#ifndef sizeofint_h
#define sizeofint_h
#ifdef __cplusplus
extern "C" {
    
#include <stdio.h>
    void sizeofFunc ();
    
#endif
#ifdef __cplusplus
}
#endif

#endif /* sizeofint_h */
