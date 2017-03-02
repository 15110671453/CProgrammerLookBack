//
//  Node.hpp
//  XcodeCProgrammer
//
//  Created by admindyn on 2017/2/28.
//  Copyright © 2017年 admindyn. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
/*
 要定义的类
 */

class Node {
    
    /*要定义的类 Node 类 数据成员 构造函数*/
public:
    Node(char data = 0);
    char m_cData;//并不是这个节点的索引而是这个节点的值
    bool m_bIsVisited;//记录当前节点有没有被访问过
};


#endif /* Node_hpp */
