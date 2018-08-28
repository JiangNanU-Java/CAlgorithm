# 封装

## 类对象
```c++
class TV
{
public:
    char name[];
    void test(){
        ...
    }
};

1.从栈中实例化对象
TV tv;
TV tv[20];

=> 调用：.
p.val

=> 系统自动释放内存


2.从堆中实例化对象
TV *p = new TV();
TV *q = new TV()[20];

=> 调用：->
p->val

=> 手动释放内存
delete p;
```

## 初始string
```c++
#include <string>
using namespace std;

string name = "hello";
string s2("hello");

s.empty()
s.size()

输入：
string name;
getline(cin,name)
```

## 数据封装
```c++
class TV{
public:
 set...
 get...
private:
 val1
 val2
}
```

## 类内定义 内联函数
```c++
inline void test(){
    ...
}

类外定义：
类内定义接口
类外进行实现

☆分文件类外定义
.h头文件 编写类和接口
.cpp：导入头文件，编写实现类，要写命名空间


```

## 构造函数
```c++
类似Java

初始化列表:先于构造函数执行，用于初始化成员参数
Student():val1("1"),val2("1"){...}
可以用于给const赋值，若在构造函数赋值则会出错


拷贝构造函数：拷贝过程
Student(const Student &a)

```

## 析构函数
```c++
销毁时调用

定义：~类名()

~Student(){...}

```

## 对象数组
```c++
类似Java
```

## 深拷贝浅拷贝
```c++
拷贝函数中值得传递不同
若传递指针，则可能指向同一块内存

深拷贝：
不只将值复制，将指针所指向的内存同样拷贝

浅拷贝：
只将值复制，销毁时可能导致泄露

```

## this
```c++
this->数值
编译时编译器为每个调用都加了一个this参数
```

## const
```c++
const数据成员
需要在构造函数前进行初始化

使用初始化列表进行初始化
```

# 继承

## 公有继承
```c++

class 子类:父类{

}

public 子类都可访问
protected  子类可访问
private 子类无法继承

protected无法直接访问值
```

## 隐藏
```c++
访问父类同名函数：

子类对象.父类名::函数名
soldier.Person::play()
```

## is-a
```c++
“是一个”

抽象类“是一个”基类

``` 

## 多重继承
```c++
父
↑
次父
↑
子类
```

## 多继承
```c++
父1 父2 ...
↑   ↑ 
   子类
   
class 子类：public 父1，public 父2{}
```

## 虚继承
```c++
菱形继承
    A
  ↑   ↑
B       C
  ↑   ↑
    D
    
若D直接继承B,C 会导致来自A的数据冗余

虚继承：    
  B：virtual A
  C：virtual A
    D：public B，public C
```

# 多态

## 虚函数
```c++

父类
public:
    virtual double calcArea(){
            
    } 
    
子类：
public:
    virtual double calcArea(){
        ...
    }  
```

## 内存泄漏
```c++
delete 父类 => 执行父类的析构函数
delete 子类 => 执行子类和父类的析构函数
```

## 虚析构函数
```c++
virtual ~析构函数(){
    ...
}
```

## virtual限制
```c++
不能修饰全局函数

不能修饰内联函数

不能修饰静态函数
```

## 虚函数实现原理
```c++
虚函数表指针 => 虚函数表 => 虚函数地址
    ↑            ↑ 
    ↑           保存了虚函数入口地址
    ↑
    
    
虚函数表在子类父类中不同，但是保存的函数入口地址是相同的
若子类重载父类函数，那么子类虚函数表中方法入口地址指向子类实现函数
```

## 虚析构函数
```c++

子类析构(先) => 父类析构(后) 
```

## 纯虚函数 -> 抽象类
```c++
没有函数体，定义时 =0

virtual double name () = 0 ;

虚函数表中入口地址指向0，无实现体

仅定义抽象，并无实现，类似抽象类

子类必须全部实现抽象方法，才能实例化

```

## 接口类
```c++
仅含有纯虚函数的类
```

## 运行时类别识别
```c++
传入参数：*obj

类型判断：typeid(obj) == typeid(某类型)

类型转化：dynamic_cast<目标类型 *>(obj)
```

## 异常处理
```c++
try 
catch
throw

catch异常的类型与throw抛出的类型相同
```

# 模板

## 友元函数
```c++
friend前缀

友元全局函数
成员全局函数

能够访问友元的私有成员

friend void printXY(类型 &obj)
```

## 友元类
```c++
在类中定义友元对象
那么可以访问友元对象的属性
```

## 静态
```c++
static

```

## 运算符重载
```c++
本质：函数重载

operator运算符():

operator-()   =>   '-'的重载
operator++() 返回&   =>   前置'++x'的重载
operator++() 返回  =>   后置'x++'的重载


一元运算符：一个参数
二元运算符：两个参数进行运算
```

## 函数模板
```c++
类似于泛型
根据类型不同使用同样的函数逻辑

三个关键字template typename class


template <class T>       指定模板泛型
T max(T a, T b)
{
    return a+b;
}

使用 max<char>("A","B");
```

## 类模板
```c++
同上，泛型
```

## 标准模板
```c++
STL 标准模板库

1、vector向量：对数组的封装
动态数组，随机读取时O(C)，常量时间

vector<T> v(...);

定义迭代器 vector<string>::iterator citer = vec.begin()

2、链表list


```






































