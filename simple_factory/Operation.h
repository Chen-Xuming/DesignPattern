/*
 *      Operation 虚类 + 各种继承的实现
 */

#ifndef DESIGNPATTERN_OPERATION_H
#define DESIGNPATTERN_OPERATION_H

#include <iostream>
#include <cmath>

template <class T>
class Operation{
public:
    Operation() = default;
    ~Operation() = default;

    virtual T get_result(T a, T b) = 0;     // 这样设计的坏处：只考虑到双操作数的运算
};

template <class T>
class OperationAdd: public Operation<T>{
public:
    T get_result(T a, T b) override {
        return a + b;
    }
};

template <class T>
class OperationMinus: public Operation<T>{
public:
    T get_result(T a, T b) override {
        return a - b;
    }
};

template <class T>
class OperationMultiply: public Operation<T>{
public:
    T get_result(T a, T b) override {
        return a * b;
    }
};

template <class T>
class OperationDivide: public Operation<T>{
public:
    T get_result(T a, T b) override {
        if (b == 0){
            std::cout << "The number b can't be zero.\n";
            return 0;
        }
        return a / b;
    }
};

template <class T>
class OperationSqrt: public Operation<T>{
public:
    T get_result(T a){
        if(a < 0){
            std::cout << "The number can't be less than zero.\n";
        }
        return OperationSqrt::get_result(a, 0);
    }

private:
    T get_result(T a, T b) override{
        if(a < 0) return 0;
        double result = std::sqrt(double(a));
        return (T)result;
    }
};



#endif //DESIGNPATTERN_OPERATION_H
