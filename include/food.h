#ifndef FOOD_H
#define FOOD_H

#include <iostream>

class Food
{
    private:

      std::string name;
      float price;

    public:

      Food();
      Food(const Food &);
      ~Food(){};

      std::string get_name();
      float get_price();

      int set_name(std::string);
      int set_price(float);

      bool operator==(const Food);
};

#endif