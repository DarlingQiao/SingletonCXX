#ifndef SINGLETON_HPP
#define SINGLETON_HPP


#include <string>
#include <iostream>

#define CXX 

namespace singleton {

  class SingletonBase {
  private:
    SingletonBase() {};
    SingletonBase& operator=(const SingletonBase& t) {};//赋值
    SingletonBase(const SingletonBase&) {};//拷贝
  public:
    virtual ~SingletonBase() {}
  };

#ifdef CXX //c++11

  class SingletonBaseCxx : public SingletonBase {
  public:
    SingletonBaseCxx() = default;
    SingletonBaseCxx& operator=(const SingletonBaseCxx&) = delete;//赋值
    SingletonBaseCxx(const SingletonBaseCxx& ) = delete;//拷贝
    SingletonBaseCxx(const SingletonBaseCxx&&) = delete;//移动构造
    virtual ~SingletonBaseCxx() {}
  };

  /*
  * 饿汉模式  多线程安全
  */
  /*template <class T>
  class HungerCxx : public SingletonBaseCxx {
  private:
    static std::unique_ptr<T> ptr_;

  public:
    virtual ~HungerCxx() {
      std::cout << "delete" << std::endl;
    }

    static std::unique_ptr<T>& getInstance() {
      return ptr_;
    }
  };
  template <class T> std::unique_ptr<T> HungerCxx<T>::ptr_ = std::unique_ptr<T>(new T());*/
  


#endif

  /*
  * 饿汉模式  多线程安全
  */
  template <class T>
  class Hunger : public SingletonBase {
  private:
    static T *ptr_;

  public:
    ~Hunger() {
      if (Hunger::ptr_) {
        delete Hunger::ptr_;
        Hunger::ptr_ = nullptr;
      }
    }
    /*static void destroy() {
      if (ptr_) delete ptr_;
      ptr_ = nullptr;
      std::cout << "delete" << std::endl;
    }*/

    static T * getInstance() {
      return ptr_;
    }

  };
  template <class T> T * Hunger<T>::ptr_ = new T();


  enum class SingletonType {
    hunger = 0,
    cxx
  };

  enum class SingletonStyle {
    none,
    cxx
  };

  template <class T>
  class SingletonFactor {
  public:

  public:
    static T* creatHunger() {
      return Hunger<T>::getInstance();
    }

    static void destroyHunger() {
      return Hunger<T>::destroy();
    }

    static T* creat(SingletonType t) {

    }

    static T* creat(SingletonType t, SingletonStyle s) {
      
    }
  };



}


class SingletonLog {
private:
  //std::string logPath;
  //std::mutex mutex;
  //static std::shared_ptr<SingletonLog> ptr;

public:
  virtual ~SingletonLog() {}
  SingletonLog() {
    std::cout << "gouzao" << std::endl;
  }
  /* static SingletoLog * getInstance() {

  } */

  /*static std::shared_ptr<SingletonLog> getInstance() {
    if (ptr) {

    }
  }*/

  void printf() {
    std::cout << "test" << std::endl;
  }

private:
  

};




#endif