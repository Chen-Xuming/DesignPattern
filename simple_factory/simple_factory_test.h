//
// Created by doris on 2022/7/24.
//

#ifndef DESIGNPATTERN_SIMPLE_FACTORY_TEST_H
#define DESIGNPATTERN_SIMPLE_FACTORY_TEST_H

#include "OperationFactory.h"

void test_simple_factory_mode() {
    auto add1 = OperationFactory::createOperation<int>("+");
    std::cout << add1->get_result(1, 2) << std::endl;

    auto minus1 = OperationFactory::createOperation<double>("-");
    std::cout << minus1->get_result(1.333, 0.055) << std::endl;

    auto multi1 = OperationFactory::createOperation<float>("*");
    std::cout << multi1->get_result(2.0, 4.1) << std::endl;

    auto div1 = OperationFactory::createOperation<int>("/");
    std::cout << div1->get_result(9, 4) << std::endl;
    div1->get_result(1, 0);

    auto sqrt = OperationFactory::createOperation<double>("sqrt");
    std::cout << sqrt->get_result(9.0, 0) << std::endl;
    std::cout << sqrt->get_result(-1, 0) << std::endl;

    auto undefined = OperationFactory::createOperation<int>("+++");
    undefined->get_result(1, 1);

}
#endif //DESIGNPATTERN_SIMPLE_FACTORY_TEST_H
