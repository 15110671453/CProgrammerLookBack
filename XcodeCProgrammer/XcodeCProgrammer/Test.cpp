//
//  Test.cpp
//  XcodeCProgrammer
//
//  Created by admindyn on 2017/2/28.
//  Copyright © 2017年 admindyn. All rights reserved.
//
#include <iostream>
#include "Node.hpp"
#include "Map.hpp"
#include "Test.hpp"
using namespace std;

void testTu()
{
    //图的使用
    
    Map* map = new Map(8);
    
    Node* pNodeA = new Node('A');
    Node* pNodeB = new Node('B');
    Node* pNodeC = new Node('C');
    Node* pNodeD = new Node('D');
    Node* pNodeE = new Node('E');
    Node* pNodeF = new Node('F');
    Node* pNodeG = new Node('G');
    Node* pNodeH = new Node('H');
    
    map->addNode(pNodeA);
    map->addNode(pNodeB);
    map->addNode(pNodeC);
    map->addNode(pNodeD);
    map->addNode(pNodeE);
    map->addNode(pNodeF);
    map->addNode(pNodeG);
    map->addNode(pNodeH);
    
    
    map->setValueToMatrixForUndirectedGraph(0, 1);//A-B
    map->setValueToMatrixForUndirectedGraph(0, 3);//A-D
    map->setValueToMatrixForUndirectedGraph(1, 2);//B-C
    map->setValueToMatrixForUndirectedGraph(1, 5);//B-F
    map->setValueToMatrixForUndirectedGraph(3, 6);//D-G
    map->setValueToMatrixForUndirectedGraph(3, 7);//D-H
    map->setValueToMatrixForUndirectedGraph(6, 7);//G-H
    map->setValueToMatrixForUndirectedGraph(2, 4);//C-E
    map->setValueToMatrixForUndirectedGraph(4, 5);//E-F
    
    map->printMatrix();
    cout<<endl;
    map->resetNode();
    map->depthFirstTraverse(0);
    cout<<endl;
      map->resetNode();
    map->breadthFirstTraverse(0);
    cout<<endl;
    
    
}
