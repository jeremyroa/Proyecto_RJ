#include <restaurant.h>

Restaurant::Restaurant()
{
    this->name = "Default";
    this->rif = "J000000000";
    this->tlf.clear();
    this->state = "NONE";
    this->city = "NONE";
    this->address = "Fake";
    this->description = "Fake Description";
    this->type_rest = chinese;
    this->email = "fake_email@gmail.com";
    this->password = "";
    this->card = TDC();
    this->menu = Menu();
    this->orders.clear();
    this->image = nullptr;
}

Restaurant::Restaurant(const Restaurant &Rest)
{
    this->name = Rest.name;
    this->rif = Rest.rif;
    this->tlf = Rest.tlf;
    this->state = Rest.state;
    this->city = Rest.city;
    this->address = Rest.address;
    this->description = Rest.description;
    this->type_rest = Rest.type_rest;
    this->email = Rest.email;
    this->password = Rest.password;
    this->card = Rest.card;
    this->menu = Rest.menu;
    this->orders = Rest.orders; 
    this->image = Rest.image;  
}


std::string Restaurant::get_name()
{
    return this->name;
}

std::string Restaurant::get_rif()
{
    return this->rif;
}

std::vector <std::string> Restaurant::get_tlf()
{
    return this->tlf;
}

std::string Restaurant::get_state()
{
    return this->state;
}

std::string Restaurant::get_city()
{
    return this->city;
}

std::string Restaurant::get_address()
{
    return this->address;
}

std::string Restaurant::get_description()
{
    return this->description;
}

rest Restaurant::get_type_rest()
{
    return this->type_rest;
}

std::string Restaurant::get_email()
{
    return this->email;
}

std::string Restaurant::get_password()
{
    return this->password;
}

TDC Restaurant::get_tdc()
{
    return this->card;
}

Menu Restaurant::get_menu()
{
    return this->menu;
}

std::vector <Order> Restaurant::get_orders()
{
    return this->orders;
}

std::string Restaurant::get_image()
{
    return this->image;
}



int Restaurant::set_name(std::string nam)
{
        if (contains_number(nam) == 0)
        {
            this->name = nam;
            return 0;
        }

        return 1;
}

int Restaurant::set_rif(std::string i)
{
    if ((i.size() == 10)and (search_numbers(i.substr(1))) and (!std::isdigit(i[0]))){
                this->rif = i;
                return 0;
        }
        else
        {
            return 1;
        }
}

int Restaurant::set_tlf_all(std::vector <std::string> TLF)
{
    for(auto i : TLF)
    {
        if(!search_numbers(i)) return 1;
    }

    this->tlf = TLF; 
    return 0;
}

int Restaurant::set_tlf(std::string TLF)
{
    for(auto i : this->tlf)
    {
        if(i == TLF) return 1;
    }

    this->tlf.push_back(TLF);
    return 0;
}

int Restaurant::set_state(std::string sta)
{
    this->state = sta;
    return 0;
}

int Restaurant::set_city(std::string cit)
{
    this->city = cit;
    return 0;
}

int Restaurant::set_address(std::string add)
{
    this->address = add;
    return 0;
}

int Restaurant::set_description(std::string desc)
{
    if(desc.size() <= 250)
    {
        this->description = desc;
        return 0;
    }

    return 1;
}

int Restaurant::set_type_rest(rest re)
{
    this->type_rest = re;
    return 0;
}

int Restaurant::set_email(std::string ema)
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

int Restaurant::set_password(std::string x)
{
    if (x.size() >= 8)
        {
                if (x.find_first_of(" ") != std::string::npos)
                {
                        return 1;//throw std::invalid_argument("the password can not have space");
                }
                else if (x.find_first_of("0123456789") != std::string::npos)
                {
                        if (x.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") != std::string::npos)
                        {
                                if (x.find_first_of("!#$%&'()+,,-./:;<=>?@]\[_^`{|}~") != std::string::npos)
                                {
                                        this->password = x;
                                        return 0;
                                }
                                else
                                {
                                        return 2;//throw std::invalid_argument("The password need at least one special character");
                                }
                        }
                        else
                        {
                                return 3;//throw std::invalid_argument("The password need at least one capital letter");
                        }
                }
                else
                {
                        return 4;//throw std::invalid_argument("The password need at least one number");
                }
        }
        else
        {
                return 5;//throw std::domain_error("the password must be over 8 character");
        }
}

int Restaurant::set_image(std::string i)
{
    this->image = i;
    return 0;
}

