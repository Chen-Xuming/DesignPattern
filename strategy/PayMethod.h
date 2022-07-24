//
// Created by doris on 2022/7/24.
//

#ifndef DESIGNPATTERN_PAYMETHOD_H
#define DESIGNPATTERN_PAYMETHOD_H

class PayMethod{
public:
    PayMethod() = default;
    ~PayMethod() = default;

    virtual void pay() = 0;
};

#endif //DESIGNPATTERN_PAYMETHOD_H
