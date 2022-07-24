//
// Created by doris on 2022/7/24.
//

#ifndef DESIGNPATTERN_PAY_H
#define DESIGNPATTERN_PAY_H

#include "ConcretePayMethod.h"
#include <string>
#include <memory>

class Pay{
public:
    Pay() = default;
    ~Pay() = default;

    static void pay(const std::string &method){
        auto payMethod = get_pay_method(method);

        if(payMethod)
            payMethod->pay();
    }

private:
    static std::shared_ptr<PayMethod> get_pay_method(const std::string &method){
        std::shared_ptr<PayMethod> payMethod(nullptr);

        if(method == "wechat"){
            payMethod = std::make_shared<WechatPay>();
        }else if(method == "ali"){
            payMethod = std::make_shared<AliPay>();
        }else if(method == "face"){
            payMethod = std::make_shared<FacePay>();
        } else{
            std::cout << "Undefined pay method.\n";
        }

        return payMethod;
    }
};

#endif //DESIGNPATTERN_PAY_H
