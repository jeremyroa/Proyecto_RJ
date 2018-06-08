#include <order.h>
#include <food.h>

Order::Order()
{
    this->ID = "000000000000000";
    this->service.clear();
    this->status = 'r';
    this->total = 0;
}

Order::Order(const Order &ord)
{
    this->set_id(ord.ID);
    this->set_service_all(ord.service);
    this->set_status(ord.status);
    this->set_total(ord.total);
}

std::string Order::get_id()
{
    return this->ID;
}

std::list <std::pair <Food,int>> Order::get_service()
{
    return this->service;
}

char Order::get_status()
{
    return this->status;
}

float Order::get_total()
{
    return this->total;
}

int Order::set_id(std::string id)
{
    if(id.size() == 15)
    {
        this->ID = id;
        return 0;
    }

    return 1;
}

int Order::set_service_all(std::list <std::pair <Food,int>> ser)
{
    this->service = ser;

    float aux;

    for(auto &i : this->service)
    {
        aux += (i.first.get_price() * i.second);
    }

    this->set_total(aux);
    return 0;
}

int Order::set_service_item(std::pair <Food,int> ord)
{
    if(ord.second <= 0) return 1;

    float aux = 0;
    
    for(auto &i : this->service)
    {                
        if(i.first == ord.first)
        {
            i.second += ord.second;
            return 0;
        }        
    }

    this->service.push_back(ord);

    for(auto &i : this->service)
    {
        aux += (i.first.get_price() * i.second);
    }

    this->set_total(aux);
    
    return 0;
}

int Order::set_status(char sta)
{
    if(sta == 'r' or sta == 'e' or sta == 'p')
    {
        this->status = sta;
        return 0;
    }

    return 1;
}

int Order::set_total(float tot)
{
    if(tot >= 0)
    {
        this->total = tot;
        return 0;
    }

    return 1;
}
