#include <iostream>
#include "nlohmann/json.hpp"
#include <fstream>

int main()
{
  nlohmann::json film;
  film["Name"] = "The Shawshank Redemption";
  film["Country"] = "USA";
  film["Studio"] = "Columbia pictures";
  film["Director"] = "Frank Darabont";
  film["Producer"] = "Niki Marvin";
  film["Scenario"] = "Stephen King";
  film["Main roles"][" Andy Dufresne"] = "Tim Robbins";
  film["Main roles"]["Ellis \"Red\" Redding"] = "Morgan Freeman";
  film["Main roles"]["Samuel Norton"] = "Bob Gunton";
  std::ofstream filmFile("..\\film.json");
  if (!filmFile.is_open())
  {
    std::cout << "Can't open file ..\\film.json" << std::endl;
    return -1;
  }
  filmFile << film << std::endl;
  filmFile.close();
  return 0;
}
