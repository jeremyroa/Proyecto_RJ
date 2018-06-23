#ifndef FOOD_H
#define FOOD_H

#include <iostream>

class Food
{
    private:

      std::string name;
      float price;
      std::string image;

    public:

      Food();
      Food(const Food &);
      ~Food(){};

      std::string get_name();
      float get_price();
      std::string get_image();

      int set_name(std::string);
      int set_price(float);
      int set_image(std::string);

      bool operator==(const Food);
};

#endif