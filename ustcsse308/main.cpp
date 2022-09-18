//#pragma once
#include<iostream>
#include"static.h"

int main(){
    Static_use* static_use = new Static_use();
    static_use->print();
    return 0;
}