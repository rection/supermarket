#include "Sections/Games.cpp"
#include <iostream>
#include <string>
class BillReport {
public:
  void show(){
    string Name;
    std::cout << "Game Name: " << std::endl;
    //std::cin >> Name; 
    Games Gamesobj;
    std::cout << Gamesobj.getProductYear() << std::endl;
  }
  void set(){
    string GameName = getLine();
    string BrandName = getLine();
    //std::cout << "\nGame Name: " << std::endl;
    //std::cin >> GameName;
    Games Gameobj;
    Gameobj.setProductYear(GameName);
  }
}; 
