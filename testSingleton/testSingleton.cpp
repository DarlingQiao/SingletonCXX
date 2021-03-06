// testSingleton.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "Singleton.hpp"
#include <malloc.h>
using namespace singleton;

class MyClass 
{
public:
  MyClass() {}
  ~MyClass() {}

  MyClass(int s) {}

  template<typename T>
  void test(T A) {}

private:

};

void f(int a) {}
void f() {}
int f(void* c) { return 0; }


class MyClass1 : public MyClass
{
public:
  MyClass1() {}
  ~MyClass1() {}

  template<typename T>
  void test(T A) {
  }

private:

};





//template <typename Type>
// main()的三个函数模板声明
/*template <typename Type>
void min(const Type& c, int) {
  std::cout << "1" << std::endl;
  
}

template <typename Type>
void min(const Type*c, int) {
  std::cout << "2" << std::endl;
  
}*/

template <typename Type>
void min(Type c) {
  std::cout << "3" << std::endl;

}


/*void min(int a, int c) {
  std::cout << "4" << std::endl;
}*/

struct MyStruct
{
  static int a;
  int b;
};






#include <vector>
#include <string>
#include "test.hpp"
int main()
{
  std::vector<int> tesa = {1,2,3,4,5,6};
  int aaax = 0;
  for (aaax = 0; aaax < tesa.size(); aaax++) {
    std::cout << aaax << "," << tesa[aaax] << std::endl;
  }
  std::cout << aaax << std::endl;
  aaax = 0;
  for (aaax = 0; aaax != tesa.size(); ++aaax) {
    std::cout << aaax << "," << tesa[aaax] << std::endl;
  }
  std::cout << aaax << std::endl;

  //singleton::SingletonBase a;
  auto p = Hunger<SingletonLog>::getInstance();
  p->printf();

  //auto p1 = HungerCxx<SingletonLog>::getInstance();
  //p1->printf();
  //std::cout << "Hello World!\n"; 


  void* b = malloc(sizeof(int) * 10);
  if (b) {
    memset(b, 0, sizeof(int) * 10);
    auto ccc = sizeof(b);
    ccc = _msize(b);
    free(b);
  }



  void* a = malloc(sizeof(int));
  if (a) {
    memset(a, 0, sizeof(int));
    auto cc = sizeof(a);
    free(a);
    a = nullptr;
  }


  auto q = new int;
  auto c = sizeof(q);
  auto q1 = new int[sizeof(int) * 10];
  auto ccc = _msize(q1);
  memset(q1, 0, sizeof(int) * 10);
  c = sizeof(q1);
  c = sizeof((char*)q1);

 

  const char* s = "1234567890-";
  c = sizeof(s);
  const char* ss = (const char*)q1;
  c = sizeof(ss);
  int asssq[] = { 1234, 2, 2, 2, 2, 2, 2, 2 };
  c = sizeof(asssq);
  const int* as = (const int*)&asssq;
  c = sizeof(as);
  std::vector<char> sd;
  c = sizeof(sd);
  char ps[] = {0};
  c = sizeof(ps);



  //函数模板

  int cs = 0;
  int* ccsap = &cs;
 // min(cs);
  min<int>(cs);
  min<const int&>(cs);
  min<const int*>(ccsap);
  MyClass my;
  min<MyClass>(my);
  min<const MyClass&>(my);
  
  const double acss = 0.02;
  min(&acss);
  char ssssss = 'c';
  min(ssssss);
  min<std::string>("c");


  MyClass sasa{10};

  MyClass1 ads;
  ads.test("ghjk");

  delete q;
  delete[] q1;

  MyBase ca;
  My1 ca1;
  std::cout << ca.a << "," << &ca.a << std::endl;
  std::cout << ca1.a << "," << &ca1.a << std::endl;
  ca.a = 10;
  ca1.a = 11;
  std::cout << ca.a << "," << ca1.a << std::endl;

  system("pause");
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
