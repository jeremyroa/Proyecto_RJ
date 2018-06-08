#include <food.h>

      Food::Food()
      {
          this->name = "Default food";
          this->price = 0;
      }
      Food::Food(const Food &f)
      {
          this->name = f.name;
          this->price = f.price;       
      }
     
      std::string Food::get_name()
      {
          return this->name;          
      }

      float Food::get_price()
      {
          return this->price;          
      }

      int Food::set_name(std::string n)
      {
          this->name = n;
          return 0;
      }
      int Food::set_price(float p)
      {
          if(p > 0)
          {
              this->price = p;
              return 0;
          }

          return 1;
      }

    bool Food::operator==(const Food a){
        return((this->name == a.name) and (this->price == a.price));
    }