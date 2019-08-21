#pragma once

#include <iostream>
#include <map>
class MyBase {
public:
  MyBase() {
    std::cout << "base" << std::endl;
  }
  static int a;
};
int MyBase::a = 0;

void fun(int a) {
}

void fun(char* a) {
}

void fun(nullptr_t a) {
}


#include <condition_variable>
void test() {
  std::condition_variable p;
  p.notify_one();

}



#include<queue>
#include<vector>
class My1 : public MyBase {

public:
  My1() {
    fun(0);
    fun(NULL);
    char* p = nullptr;
    nullptr_t q = 0;
    if (q == nullptr) {
    }
    fun1();
    fun(p);
    fun(nullptr);
    auto s = &"aaaa";

    //auto && saa = "aaaa";


    auto && ssa = fun1();

    auto sq = ("aaaa");
    auto c = 3;
   
   
  }
 
  //My1(std::string& s) {}
  My1(const std::string& s) {}
 
  My1(std::string&& s) {};

  void ffun() {
    
    auto a = My1("av");
    auto s = std::string("11");
    int cc = 0;
    int && ccc = 0;

   
    auto sa = My1(s);

  }

  int fun1() {
    std::map<int,std::string> map;
    map[1] = "111";
    map.insert(std::make_pair<int,std::string>(2,"111"));
    auto s = map.insert({3,"4567"});
    s = map.insert({ 3,"abc67" });


    std::queue<int> queue;
    
    std::vector<int> v;
   
    return 0;
  }

};



