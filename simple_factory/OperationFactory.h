/*
 *      Operation 工厂类，负责实例化各种具体操作
 */

#ifndef DESIGNPATTERN_OPERATIONFACTORY_H
#define DESIGNPATTERN_OPERATIONFACTORY_H

#include "Operation.h"
#include <memory>
#include <string>

class OperationFactory{
    OperationFactory() = default;
    ~OperationFactory() = default;

public:
    template<class T>
    static std::shared_ptr<Operation<T>> createOperation(const std::string &op){
        std::shared_ptr<Operation<T>> operation(nullptr);

        // 缺点：switch不支持string，if-else结构很麻烦，尤其是operation种类多的时候
        if (op == "+"){
            operation = std::make_shared<OperationAdd<T>>();
        }else if(op == "-"){
            operation = std::make_shared<OperationMinus<T>>();
        }else if(op == "*"){
            operation = std::make_shared<OperationMultiply<T>>();
        }else if(op == "/"){
            operation = std::make_shared<OperationDivide<T>>();
        }else if(op == "sqrt"){
            operation = std::make_shared<OperationSqrt<T>>();
        }else{
            std::cout << "Undefined operation.\n";
        }

        return operation;
    }
};

#endif //DESIGNPATTERN_OPERATIONFACTORY_H
