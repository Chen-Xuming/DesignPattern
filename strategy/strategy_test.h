//
// Created by doris on 2022/7/24.
//

#ifndef DESIGNPATTERN_STRATEGY_TEST_H
#define DESIGNPATTERN_STRATEGY_TEST_H

#include "Pay.h"

void test_strategy_mode(){
    Pay::pay("wechat");
    Pay::pay("ali");
    Pay::pay("face");
    Pay::pay("hello");
}

#endif //DESIGNPATTERN_STRATEGY_TEST_H
