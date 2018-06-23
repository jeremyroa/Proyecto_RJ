#ifndef ORDER_H
#define ORDER_H

#include <food.h>
#include <iostream>
#include <utility>
#include <string> 
#include <algorithm>
#include <list>


/*
   Status:  r = realizado
            e = enviado
            p = preparando
            
 */

class Order
{
    private:
      
      std::string ID;
      std::list <std::pair <Food,int>> service;
      char status;
      float total;

    public:

      Order();
      Order(const Order &);
      ~Order(){};

      std::string get_id();
      std::list <std::pair <Food,int>> get_service();
      char get_status();
      float get_total();

      int set_id(std::string);
      int set_service_all(std::list <std::pair <Food,int>>);
      int set_service_item(std::pair <Food,int>);
      int set_status(char);


    protected:
      int set_total(float);
      
};

#endif