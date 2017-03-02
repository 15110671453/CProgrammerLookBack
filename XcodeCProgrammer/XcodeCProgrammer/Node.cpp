//
//  Node.cpp
//  XcodeCProgrammer
//
//  Created by admindyn on 2017/2/28.
//  Copyright © 2017年 admindyn. All rights reserved.
//

#include "Node.hpp"

//希望老师能出《深入理解计算机系统》和《计算机网络》距离C++工程师已经不远了
 //定义Node构造函数
Node::Node(char data)
{
    m_cData = data;
    m_bIsVisited = false;//没有访问过为false
    
}
