//
//  Map.cpp
//  XcodeCProgrammer
//
//  Created by admindyn on 2017/2/28.
//  Copyright © 2017年 admindyn. All rights reserved.
//
#include <iostream>

#include "Map.hpp"


Map::Map(int capacity)
{
//构造函数 初始化数据成员
    /*
     记录 容量 和 已经放入的顶点的数量的
     存储顶点数组
     通过new分配内存
     存储邻接矩阵
     通过 分配内存 int 类型 并且行和列相同
     
     还需要将邻接矩阵 进一步处理
     memset 方法 进行内存的设定 
     对指针m_pMatrix指向的内存设定
     初始值 ，以及需要的内存空间大小
     */
    
    m_iCapacity=capacity;
    m_iNodeCount=0;
    m_pNodeArray= new Node[m_iCapacity];
    m_pMatrix= new int[m_iCapacity* m_iCapacity];
    //初始化 矩阵 将矩阵每一个元素 都置为0
    memset(m_pMatrix,0,m_iCapacity*m_iCapacity*sizeof(int));
    
//    for (int i=0; i<m_iCapacity*m_iCapacity; i++) {
//        m_pMatrix[i]=0;
//    }
    
    
}
Map::~Map()
{
    //析构函数 对构造函数中 申请内存的部分 做内存的释放
    delete []m_pNodeArray;
    delete []m_pMatrix;

}

bool Map::addNode(Node *pNode)
{
    //这里Node 类中没有定义顶点的索引
    // 这里看出 其实索引 就是m_pNodeArray数组的下标
    //添加节点并不是将传入进来的节点的指针存储进去
    //如果外部节点数据损坏 那么图中的节点数据也损坏了
    //因此 我们在构造函数中先申请内存 我们保证存储顶点数据的内存 是由图自己控制的
    //我们只需要将传入进来的顶点的数据保存起来就可以了
    //那么这段内存或数据究竟是哪一个节点呢
    //我们通过这个m_pNodeArray[m_iNodeCount]就可以看出来
    //就自动有了节点的索引
    
    // 添加之前 需要考虑 传入的节点 是否为Null
    
    if (pNode==NULL) {
        return false;
    }
    
    m_pNodeArray[m_iNodeCount].m_cData=pNode->m_cData;
    // 下标加加
    m_iNodeCount++;
    
    return true;
    
}
 void Map::resetNode()
{
    for (int i=0; i<m_iNodeCount; i++) {
        m_pNodeArray[i].m_bIsVisited=false;
    }
}

bool Map::setValueToMatrixForDirectedGraph(int row, int col,int val)
{
    // 向有向图中设置值
    // 首先找到邻接矩阵
    //row col 行和列 本质 就是顶点的索引
    //val 是权值
    
    if (col<0&&col>=m_iCapacity) {
        return false;
    }
    
    if (row>=0&&row<m_iCapacity) {
        m_pMatrix[row*m_iCapacity+col]=val;
        return true;
    }else
    {
         return false;
    }
    
}
bool Map::setValueToMatrixForUndirectedGraph(int row, int col,int val)
{
    if (col<0&&col>=m_iCapacity) {
        return false;
    }
    if (row<0&&row>=m_iCapacity) {
        return false;
    }
    m_pMatrix[row*m_iCapacity+col]=val;
    //只要将行当作列 列当作行就可以了 无向图嘛
    //当你设置一个顶点弧1 它关联的那个我们需要 也同时设置为1
    m_pMatrix[col*m_iCapacity+row]=val;
    //多了设置对角线
    return true;

}

void Map::printMatrix()
{
    for (int i=0; i<m_iCapacity; i++) {
        for (int k=0; k<m_iCapacity; k++) {
        cout<< m_pMatrix[i*m_iCapacity+k]<<"";
        }
        //打印完每一行后 回车
        cout<<endl;
    }
}

bool Map::getValueFromMatrix(int row, int col, int &val)
{
    //每次从一个指定的第几行row
    //重新起始行 开始偏移列 来查找数据
    val = m_pMatrix[row*m_iCapacity+col];
    return true;
}


void Map::depthFirstTraverse(int nodeIndex)
{
    // 图的深度优先遍历  与 二叉树的 前序遍历
    // 先访问根 再访问左子树 然后右子树
    // 对于图 先访问根 再访问第一个子树 再访问第二个子树 再访问第三个子树
    
    //任何一个节点都可能作为根
    //这里传入要做root的索引
    
    //先用cout 打印当前传入进来的当前节点的数据
    int value = 0;
    
    cout << m_pNodeArray[nodeIndex].m_cData<<"";
    //再将当前的节点标记为已经访问过
    m_pNodeArray[nodeIndex].m_bIsVisited=true;
    //通过邻接矩阵判断是否与其他顶点有连接
    for (int i=0; i<m_iCapacity; i++) {
        //
        getValueFromMatrix(nodeIndex, i, value);
        if (value!=0)//判断有狐连接其他顶点
        {
            // 虽然存在这样一条狐 但是连接到对面的点 已经被访问过了 那就没有意义了
            //在判断该点是否被访问过
            if (m_pNodeArray[i].m_bIsVisited) {
                //访问过 进入下一次循环
                continue;
            }else
            {
                depthFirstTraverse(i);
            }
        }else
        {
            continue;
        }
    }

}
void Map::breadthFirstTraverse(int nodeIndex)
{
    //打印出这个节点的数据 证明 我们访问过了
  cout<<m_pNodeArray[nodeIndex].m_cData<<"";
    //标记已经访问过
    m_pNodeArray[nodeIndex].m_bIsVisited=true;
    //需要将当前节点存到数组中 我们使用当前库数组vector 声明 数组变量
    //vector 是标准模版库 需要包含头文件 命名空间
    vector<int> curVec;
    // 添加元素 成员函数
    curVec.push_back(nodeIndex);
    
    breadthFirstTraverseImpl(curVec);
    
    
    
    
}

void Map::breadthFirstTraverseImpl(vector<int> preVec)
{
   //广度优先遍历 先 分层 再设计 先访问A 然后将A放到一个数组中
    //我们发现 第一层只有 A 一个节点 此时数组中只有A
    //然后从邻接矩阵中找A与那些节点相连把这些相连的节点放到一个数组中，因此 B D 存到一个数组 ，而此时的数组和A 不是一个 相同的数组
    //C F G H
    //E
  
    
    // 真正实现 广度优先函数
    
    int value =0;
    
    vector<int> curVec;
    //preVec.size() 返回值 是sizetype 需要强制类型转换
    for (int j =0 ; j<(int)preVec.size(); j++) {
        for (int i =0; i<m_iCapacity; i++) {
            //通过邻接矩阵查 和 那个点有链接
            getValueFromMatrix(preVec[j], i, value);
            if (value!=0) {
                if (m_pNodeArray[i].m_bIsVisited) {
                    continue;
                }else
                {
                 cout<<m_pNodeArray[i].m_cData<<"";
                    m_pNodeArray[i].m_bIsVisited=true;
                    curVec.push_back(i);
                }
            }
        }
    }
    
    //本层存在被访问过的点
    if (curVec.size()==0) {
        return;
    }else
    {
        breadthFirstTraverseImpl(curVec);
    }
    
}
