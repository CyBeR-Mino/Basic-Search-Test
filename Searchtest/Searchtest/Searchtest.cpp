#include <iostream>
#include <algorithm>
#include <vector>
#include <list>


std::vector<std::string> cars =
{
        "Toyota",
        "Honda",
        "Ford",
        "Chevrolet",
        "BMW",
        "Mercedes-Benz",
        "Audi",
        "Nissan",
        "Hyundai",
        "Kia"
};

int main() 
{
  

    std::vector < std::string > wantfind;
    std::string find;
    
    std::cout << "What car brand do u wanna find : ";
    std::cin >> find;
    wantfind.push_back(find);
    auto result = std::search(cars.begin(), cars.end(), wantfind.begin(), wantfind.end());

  if(result != cars.end()) 
  {
  
      std::cout << "The car is found at  " << std::distance(cars.begin(), result) << std::endl;
  
  }
  else {

      std::cout << "The brand u search is not found." << std::endl;
  }








}
 




