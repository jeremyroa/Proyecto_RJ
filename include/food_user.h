#ifndef FOOD_USER_H
#define FOOD_USER_H

#include <user.h>
#include <iostream>
#include <enumerados.h>
#include <vector>

class Food_user : public Cuser{
    private:
    std::string phone;
    std::string state;
    std::string city;
    std::string email;
    std::vector<rest> fav;
    public:

    Food_user();
    Food_user(const Food_user&);

    ~Food_user(){}

    std::string get_phone() const;
    std::string get_state() const;
    std::string get_city() const;
    std::string get_email() const;
    std::vector<rest> get_fav()const;

    int set_phone(std::string);
    int set_state(std::string);
    int set_city(std::string);
    int set_email(std::string);
    int set_fav(std::vector<rest>);
    

};

#endif