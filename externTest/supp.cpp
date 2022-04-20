#include <iostream>


extern int count;


void write_extern_b(void){
    count = 20;
    std::cout << "supp count = " << count << std::endl;
}