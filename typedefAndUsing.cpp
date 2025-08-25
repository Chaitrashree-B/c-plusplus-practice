#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string,int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

using number_t = int;
using text_t = std::string;
using pairlist_t = std::vector<std::pair<std::string,int>>;

int main(){
  pairlist_t  pairlist;
  text_t firstname = "chaitra";
  number_t age = 23;

  std::cout << firstname << '\n';
  std::cout << age << '\n';

    return 0;
}