/**
 * @file support.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
// `

extern int count;


void write_extern(void){
    std::cout << "count = " << count << std::endl;
}