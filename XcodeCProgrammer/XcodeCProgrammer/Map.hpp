//
//  Map.hpp
//  XcodeCProgrammer
//
//  Created by admindyn on 2017/2/28.
//  Copyright © 2017年 admindyn. All rights reserved.
//

#ifndef Map_hpp
#define Map_hpp
#include "Node.hpp"
#include <vector>
#include <stdio.h>
using namespace std;
class Map {
    
    
public:
    // 成员函数
    Map(int capacity);
    ~Map();
    //
    bool addNode(Node* pNode);//相中添加顶点
    void resetNode();//重置顶点 将图中每一个节点都置为没有访问过
    
    //----
    bool setValueToMatrixForDirectedGraph(int row,int col, int val=1);//为向有向图设置邻接矩阵
    bool setValueToMatrixForUndirectedGraph(int row,int col, int val=1);//为向无向图设置邻接矩阵
    
    void printMatrix();//打印邻接矩阵
    
    //深度优先搜索
    void depthFirstTraverse(int nodeIndex);
    //
    void breadthFirstTraverse(int nodeIndex);
private:
    //私有函数
    bool getValueFromMatrix(int row,int col,int &val);//从矩阵中获取权值
    void breadthFirstTraverseImpl(vector<int>preVec);//广度优先遍历实现函数
    
   
private:
     //数据成员
    int m_iCapacity;//图中最多可以容纳的顶点数
    int m_iNodeCount;//表达已经添加的顶点数
    Node* m_pNodeArray;//用来存放顶点数组
    int* m_pMatrix;//存放邻接矩阵

};

#endif /* Map_hpp */
