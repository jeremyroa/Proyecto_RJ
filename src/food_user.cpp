#include <food_user.h>
Food_user::Food_user() : Cuser()
{
    this->phone = "04000000000";
    this->state = "NONE";
    this->city = "NONE";
    this->email = "fake@gmail.com";
    this->fav.empty();
}
Food_user::Food_user(const Food_user &cop) : Cuser()
{
    this->age = cop.age;
    this->id = cop.id;
    this->name = cop.name;
    this->lname = cop.lname;
    this->sex = cop.sex;
    this->password = cop.password;

    this->phone = cop.phone;
    this->state = cop.state;
    this->email = cop.email;
    this->fav = cop.fav;
}

std::string Food_user::get_phone() const
{
    return this->phone;
}
std::string Food_user::get_state() const
{
    return this->state;
}
std::string Food_user::get_city() const
{
    return this->city;
}
std::string Food_user::get_email() const
{
    return this->email;
}
std::vector<rest> Food_user::get_fav() const
{
    return this->fav;
}

int Food_user::set_phone(std::string ph)
{
    if ((ph.size() == 10) and (contains_number(ph)))
    {
        this->phone = ph;
        return 0;
    }
    return 1;
}
int Food_user::set_state(std::string st)
{
    this->state = st;
    return 0;
}
int Food_user::set_city(std::string cit)
{
    this->city = cit;
    return 0;
}
int Food_user::set_email(std::string ema)
{
    if ((ema.find(".com") == ema.size() - 4) and ((ema.find('@') < ema.size() - 5)))
    {
        this->email = ema;
        return 0;
    }
    else
    {
        return 1;
    }
}
/** 
 * @brief  cambiar favorito
 * @note   -Tiene un enum rest
 * @param  r: std::vector<rest>
 * @retval int
 */
int Food_user::set_fav(std::vector<rest> r)
{
    this->fav = r;
    return 0;
}