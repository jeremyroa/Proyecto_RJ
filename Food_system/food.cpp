#include <food.h>

      Food::Food()
      {
          this->name = "Default food";
          this->price = 0;
          this->image = "";
      }
      Food::Food(const Food &f)
      {
          this->name = f.name;
          this->price = f.price;
          this->image = f.image;
      }
     
      std::string Food::get_name()
      {
          return this->name;          
      }

      float Food::get_price()
      {
          return this->price;          
      }

      std::string Food::get_image()
      {
          return this->image;
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

      int Food::set_image(std::string i)
      {
          this->image = i;
          return 0;
      }

    bool Food::operator==(const Food a){
        return((this->name == a.name) and (this->price == a.price));
    }