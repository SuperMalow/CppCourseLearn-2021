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

    //��ǰ���֮�����һ��Ԫ��
    void insertAfter(Node<T> *p)
    {
        p->next = next;
        next = p;
    }

    //ɾ����ǰ�ڵ�ĺ������
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

    //���غ�̽��ָ��
    Node<T> * nextNode()
    {
        return next;
    }

    //���غ�̽��ָ��
    const Node<T> * nextNode() const
    {
        return next;
    }

};


void test01()
{
    //Node<int> n;
    int ch[10];
    cout << "������ʮ�����ݣ�" ;
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