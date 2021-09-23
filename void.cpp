#include <iostream>

int main()
{
    //定义一个void变量没有意义,编译报错,但是可以定义一个空指针，空指针可以指向任意指针
    //void a;报错
    void *a;
    int a1 = 2;
    int* p1=&a1;
    a = p1;

    //但是其他指针不能指向空指针
    //void* b;
    //int* p2;
    //p2 = b;出错

    //1、可做函数返回值 
    //void function()
    
    //2、如果函数无参数,那么应声明其参数为void
    //fuction(void)

    //3、ANSI标准，不能对void指针进行算法操作;GNU则不这么认定，它指定void 的算法操作与char 一致。
    //void* c;
    //c++;错误,在GNU上正确，pvoid++的执行结果是其增大了1
    //c += 1;错误
    int a2 = 2;
    int* pint = &a2;
    pint++; //ANSI：正确 ,pint++的结果是使其增大sizeof(int)。

    //4、如果函数的参数可以是任意类型指针，那么应声明其参数为void * 
    void* memcpy(void* dest, const void* src, size_t len);//拷贝任何数据类型的对象
    void* memset(void* buffer, int c, size_t num);//用来对一段内存空间全部设置为某个字符。

    //void不能代表一个真实的变量 
    //function(void a); //错误 
}
 
