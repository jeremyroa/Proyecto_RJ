#ifndef SYSTEM_H
#define SYSTEM_H

#include <restaurant.h>
#include <food_user.h>

class System
{
    public:

      Food_user;
      Restaurant;

      void create_database();      

      ///Food_user Methods

      int add_user(Food_user);
      int login_user(std::string,std::string);
      int add_order(Order);
      ///Se llamara a las funciones confirm_order y confirm_tdc
      int pay(TDC,Order);
      std::list<Order> show_orders();
      std::list<Restaurante> show_recommend();
      Restaurant search_name_rest(std::string);
      std::vector<Restaurant> show_types_rest(std::string);
      /// search_address();
      bool accept_order(Order);
       

      /// Restaurant Methods 

      int add_rest(rest);
      int login_rest(std::string,std::string);
      ///Formato de la dc valido
      int confirm_TDC(TDC);
      Menu show_menu();
      int edit_menu(Menu);
      int edit_rest(Restaurant);
      char set_status(Order);
      ///Confirmar si el pedido se puede realizar, es decir, si hay suministros
      int confirm_order(Order);   


}



#endif

