#include <iostream>
#include <string> // for work with string objects

int
main()
{
  std::string name;
  std::cout << "Enter name of user: "; // ask user to enter the name - просит пользователя ввести своё имя
  std::cin >> name;                    // input the name into object "name" - запись входных данных в переменную "name"
  std::cout << "Hello World from " << name
            << std::endl; // output interactive string - вывод интерактивной строки 
  return 1;
}

