#include <iostream>
using namespace std;

template <class T>
class Node
{
private:
    Node<T> * next;
public:
    T data;
    Node(const T &data, Node<T> * next = 0):data(data),next(next)
    {
    }

    //当前结点之后插入一个元素
    void insertAfter(Node<T> *p)
    {
        p->next = next;
        next = p;
    }

    //删除当前节点的后续结点
    Node<T> * deleteAfter()
    {
        Node<T> * tempPtr = next;
        if (next == 0)
        {
            return 0;
        }
        next = tempPtr->next;
        return tempPtr;
    }

    //返回后继结点指针
    Node<T> * nextNode()
    {
        return next;
    }

    //返回后继结点指针
    const Node<T> * nextNode() const
    {
        return next;
    }

};


void test01()
{
    //Node<int> n;
    int ch[10];
    cout << "请输入十个数据：" ;
    for (int i = 0; i < 10; i++)
    {
        cin >> ch[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << ch[i] << endl;
    }
    
}







int main()
{
    test01();
    system("pause");
    return 0;
}