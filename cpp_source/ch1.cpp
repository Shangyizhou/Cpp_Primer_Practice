//
// Created by cer on 17-9-15.
// chapter 1
// 快速入门

#include <iostream>

void basic_io(){
    std::cout << "Enter two numbers:" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << std::endl;
}

void basic_while(){
    int sum = 0, val = 1;
    while (val <= 10){
        sum += val;
        ++val;
    }
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;
}

void basic_for(){
    int sum = 0;
    for (int val = 1; val <= 10; ++val){
        sum += val;
    }
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;
}

void basic_if(){
    std::cout << "Enter two numbers:" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    int lower, upper;
    if (v1<=v2){
        lower = v1;
        upper = v2;
    } else {
        lower = v2;
        upper = v1;
    }
    int sum = 0;
    for (int val = lower; val <= upper; ++val)
        sum += val;
    std::cout << "Sum of " << lower
              << " to " << upper
              << " inclusive is "
              << sum << std::endl;
}

void basic_cin(){
    int sum = 0, value;
    while (std::cin >> value)
        sum += value;
    std::cout << "Sum is: " << sum << std::endl;
}

void q_1_3(){
    std::cout << "Hello, World" << std::endl;
}

void q_1_4(){
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The product of " << v1 << " and " << v2
              << " is " << v1 * v2 << std::endl;
}

void q_1_5(){
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The product of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 * v2;
    std::cout << std::endl;
}

int main() {
//    basic_io();
//    basic_while();
//    basic_for();
//    basic_if();
//    basic_cin();
//    q_1_3();
//    q_1_4();
//    q_1_5();
// /* 正常注释 /* 嵌套注释 */ 正常注释*/
    std::cout << /* "*/" /* "/*" */;
    return 0;
}