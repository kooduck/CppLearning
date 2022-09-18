#include"static.h"

int Static_use::x_ = 1;
void Static_use::print(){
    std::cout<<"static variable x = "<<this->x_<<std::endl;
}
// int main(){
//     Static_use * static_use = new Static_use();
//     static_use->print();
//     return 0;
// }