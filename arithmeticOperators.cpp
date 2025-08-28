#include <iostream>
int main(){
    //predence 
    //parenthesis
    //multiplication and division
    //addition and subraction


int  students = 6 - (5 + 4) * 3 / 2; 

   std::cout << students << std::endl;
    //students = students + 1;
    students += 1;
    students++;

    students -= 1;
    students--;

    students *= 2;
    students /= 3;

    int remainder = students % 3;



    std::cout << students << std::endl;
    std::cout<< remainder ;
    return 0;
}