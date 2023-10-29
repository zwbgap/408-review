#include <iostream>

using namespace std;

// ��1.ȡһ��������ָ�룬ָ���൱�ڱ����ĵ�ַ
void example1()
{
    int a = 10; // ����һ������a
    int *p = &a; // ����һ��ָ��p��ָ�����a�������"&"��ʾȡ�����ĵ�ַ
    cout << "a = " << a << endl;
    cout << "p = " << p << endl; // ָ��p��ֵ�Ǳ���a�ĵ�ַ����һ�����ֽڵ�ʮ��������
    cout << "*p = " << *p << endl; // ��*p��ȡָ��pָ��ı�����ֵ
}

// ��2.ָ���ָ��
void example2()
{
    int a = 10;
    int *p = &a;
    int **pp = &p; // ����һ��ָ���ָ��pp��ָ��ָ��p
    cout << "a = " << a << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "pp = " << pp << endl;
    cout << "*pp = " << *pp << endl;
    cout << "**pp = " << **pp << endl;
}

// ��3.������ָ��Ĺ�ϵ
void example3()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a; // ������a����������׵�ַ�����Կ���ֱ�Ӹ�ֵ��ָ��p
    cout << "a = " << a << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "*a = " << *a << endl;
    cout << "*(p + 1) = " << *(p + 1) << endl; // p+1��ʾָ��pָ��ı�������һ�������ĵ�ַ
    cout << "*(p + 2) = " << *(p + 2) << endl;
    cout << "*(p + 3) = " << *(p + 3) << endl;
    cout << "*(p + 4) = " << *(p + 4) << endl;
    p++; // ������p++��ָ��pָ����һ������
    cout << "p++��" << *p <<endl;
}

// ��4.��ά������ָ��Ĺ�ϵ
void example4()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int *p = a[0]; // �������һ�е��׵�ַ��ֵ��ָ��p
    cout << "a = " << a << endl;
    cout << "p = " << p << endl;
    cout << "*a = " << *a << endl; // *a��ʾ��ά����ĵ�һ��
    cout << "a[0] = " << a[0] << endl;
    cout << "*p = " << *p << endl;
    cout << "*(p + 1) = " << *(p + 1) << endl;
    cout << "**(a + 1) = " << **(a + 1) << endl; // *(a + 1)��ʾ��ά����ĵڶ���)"

}

int main(int argc, char const *argv[])
{
    cout << "********** ��1 **********" << endl;
    cout << "a�Ǳ�����p��ָ�룬*p��ָ��pָ��ı�����ֵ" << endl;
    example1();

    cout << "********** ��2 **********" << endl;
    cout << "pp��ָ���ָ�룬**pp��ָ��ppָ���ָ��ָ��ı�����ֵ" << endl;
    example2();

    cout << "********** ��3 **********" << endl;
    cout << "a��һά���飬p��ָ�������һ��ֵ��ָ��" << endl;
    example3();

    cout << "********** ��4 **********" << endl;
    cout << "a�Ƕ�ά���飬p��ָ�������һ�е�ָ��" << endl;
    example4();
    return 0;
}