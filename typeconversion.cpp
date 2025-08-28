#include <iostream>
int main(){
  //type conversion - conversion a value of one data type to another data type
  //implicit - automatic
  //explicit - precede value with new data type (int)

  double  x = (int)3.14;
  std::cout << x << std::endl;

  char y = 100;
  std::cout << y << std::endl;
  std::cout << char(100) << std::endl;

  int correct = 8;
  int questions = 10;
  double score = correct/(double)questions * 100;
  std::cout << score << "%" << std::endl;
    return 0;
}