#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <food.h>
#include <iostream>
#include <utility>
#include <string> 
#include <algorithm>
#include <list>
#include <vector>
#include <enumerados.h>
#include <order.h>
#include <credit_card.h>
#include <menu.h>

class Restaurant
{
    private:

      std::string name;
      std::string rif;
      std::vector <std::string> tlf;
      std::string state;
      std::string city;
      std::string address;
      std::string description;
      rest type_rest;
      std::string email;
      std::string password;
      std::string image;
    
    public:
      int flag;
      TDC card;
      Menu menu;
      std::vector<Order> orders;

      Restaurant();
      Restaurant(const Restaurant &);
      ~Restaurant(){};

      std::string get_name();
      std::string get_rif();
      std::vector <std::string> get_tlf();
      std::string get_state();
      std::string get_city();
      std::string get_address();
      std::string get_description();
      rest get_type_rest();
      std::string get_email();
      std::string get_password();
      TDC get_tdc();
      Menu get_menu();
      std::vector <Order> get_orders();
      std::string get_image();

      int set_name(std::string);
      int set_rif(std::string);
      int set_tlf_all(std::vector <std::string>);
      int set_tlf(std::string);
      int set_state(std::string);
      int set_city(std::string);
      int set_address(std::string);
      int set_description(std::string);
      int set_type_rest(rest);
      int set_email(std::string);
      int set_password(std::string);
      int set_image(std::string);


};

#endif
