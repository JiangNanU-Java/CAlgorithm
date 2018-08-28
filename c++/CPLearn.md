## 新的数据类型
```txt
bool

初始化方法:  
int x = 1024;  
int x(1024) => 直接赋值，速度更快

C：定义必须在函数体最前方  
CP：随用随定义
```

## 输入输出
```txt
endl 可忽略 代表回车

输出
cout << "x+" << x+y << endl;

输入
cin >> x >> y
cin >> x

优点：
不关注占位符
不关注数据类型
```

## 命名空间
```txt
namespace
相当于库名的限定

namespace A{
变量 x
}
namespace B{
变量 x
}

使用：
A::x
B::x


using namespace std;

std::x => x直接使用
std::cout => cout
```

## 引用
```txt
变量的别名

基本数据类型引用：
int a = 3;
int &b = a;
b是a的别名

指针引用：
*&指针别名 = 指针；
```

## 常量const
```txt
```

## 函数
```txt
函数参数默认值
(int i,int j=5)写在右端

内联函数：
将函数替换到函数名调用出
省去调用的损耗，适用于循环函数

inline int max();

使用max()

```

## 内存管理
```txt
申请内存：
new 
int *p = new int;
int *arr = new int[10];

释放内存
delete
delete p;
delete []arr;

C:
malloc
free

申请内存可能失败
当申请大内存时，加入判断语句
if (NULL == P)



```