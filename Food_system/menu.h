#ifndef MENU_H
#define MENU_H

#include <food.h>
#include <iostream>
#include <utility>
#include <string> 
#include <algorithm>
#include <list>

class Menu
{
    private:

      std::list <std::pair<std::list <Food>,std::string>> catalog;

    public:

      Menu();
      Menu(const Menu &);
      ~Menu(){};

    std::list <std::pair<std::list <Food>,std::string>> get_catalog();

    int set_catalog_all(std::list <std::pair<std::list <Food>,std::string>>);

    int set_catalog_item(std::pair<Food,std::string>);
    
    int remove_catalog_item(std::pair<Food,std::string>);
};



#endif
