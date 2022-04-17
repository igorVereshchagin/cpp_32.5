#include <iostream>
#include "nlohmann/json.hpp"
#include <fstream>
#include <string>

void searchByName(nlohmann::json &dickt, std::string &name);

int main()
{
  nlohmann::json films;
  std::ifstream filmFile("..\\films.json");
  if (!filmFile.is_open())
  {
    std::cout << "Can't open file films.json" << std::endl;
    return -1;
  }
  filmFile >> films;
  filmFile.close();
  searchByName(films, std::string("Tom"));
  searchByName(films, std::string("Sam"));
  searchByName(films, std::string("Fox"));
  return 0;
}

void searchByName(nlohmann::json &dickt, std::string &name)
{
  std::cout << "=========================" << std::endl
            << "searching " << name << std::endl;
  for (nlohmann::json::iterator dicktIt = dickt.begin(); dicktIt != dickt.end(); dicktIt++)
  {
    for (nlohmann::json::iterator mainRolesIt = dicktIt.value()["Main roles"].begin(); mainRolesIt != dicktIt.value()["Main roles"].end(); mainRolesIt++)
    {
      nlohmann::json::value_t t = mainRolesIt.value().type();
      if (t != nlohmann::detail::value_t::string)
        continue;
      if (std::string::npos != std::string(mainRolesIt.value()).find(name))
        std::cout << dicktIt.key() << ": " << mainRolesIt.key() << ": " << mainRolesIt.value() << std::endl;
    }
  }

}