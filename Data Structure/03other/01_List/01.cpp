#include <iostream>

using namespace std;

// ʹ����������һ�����Ըı�a��ֵ
void addOneReference(int &a)
{
    a++;
}

// ������һ����ı�a��ֵ
void addOne(int a)
{
    a++;
}

int main(int argc, char const *argv[])
{
    int a = 10;
    int &b = a;

    cout << "��ʼʱ��" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    b = 20;
    cout << "b = 20��" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    addOne(a);
    cout << "ʹ��addOne(a)��" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    addOneReference(a);
    cout << "ʹ��addOneReference(a)��" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}