//
//  funccpp.cpp
//  XcodeCProgrammer
//
//  Created by admindyn on 2017/2/28.
//  Copyright © 2017年 admindyn. All rights reserved.
//

#include "funccpp.hpp"

void testInline()
{
    int i = 10;
    //为什么不所有函数都适用内联函数
    //内联编译是建议性的 不能包含for循环 逻辑简单
    //递归函数不能处理为内联函数

}


/*
 c++函数新特性
第一 c++函数参数默认值
 有规定 有默认参数值的参数 必须在参数
 表的最右端
 使用的时候的注意事项
 声明定义函数的时候 不要加默认值
 void func(int i, int j = 10, int k = 5)
 void func(int i, int j, int k)
 实现的时候加上
 
 没有实参就使用默认值 有实参就覆盖默认值
 
 第二： 函数重载
 在相同作用域内
 用同一函数名 （同名函数）
 定义的多个函数 ，函数的参数个数 或者
 函数参数的类型不同
 getMax_int_int_int
 int getMax(int x, int y,int z)
 {
 }
 getMax_double_double_double
 double getMax(double x, double y,double z)
 {
 }
 
 第三 ：： 内联函数
 
 内联函数 与 普通函数的区别
 
 main()
 
 调用 fun()
 //定义没有不同 
 调用不同
 2、调用fun 
 3、找到fun的函数入口
 4、执行fun内相关代码  
 5、然后返回回调函数
 6、再执行其他代码
 7、程序结束
 
 内联函数
 编译时将函数体代码和
 实参代替函数调用语句（）
 
 内联函数关键字 inline
 
 结束
 
 */
