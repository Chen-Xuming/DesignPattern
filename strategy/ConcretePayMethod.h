//
// Created by doris on 2022/7/24.
//

#ifndef DESIGNPATTERN_CONCRETEPAYMETHOD_H
#define DESIGNPATTERN_CONCRETEPAYMETHOD_H

#include "PayMethod.h"
#include <iostream>

class WechatPay: public PayMethod{
public:
    void pay() override{
        std::cout << "Pay through Wechat.\n";
    }
};

class AliPay: public PayMethod{
public:
    void pay() override{
        std::cout << "Pay through Alipay.\n";
    }
};

class FacePay: public PayMethod{
public:
    void pay() override{
        std::cout << "Pay through Face.\n";
    }
};

#endif //DESIGNPATTERN_CONCRETEPAYMETHOD_H
