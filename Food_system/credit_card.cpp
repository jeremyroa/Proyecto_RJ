#include <credit_card.h>
#include <user.h>

bool contains_number(const std::string &c)
{
        return (c.find_first_of("0123456789") != std::string::npos);
};

TDC::TDC()
{
    this->security_id = "123";
    this->no_id = "0000000000000000";
    this->name = "Default name";
    this->id = "00000000";
    this->expired.month = 2;
    this->expired.year = 2032;
}

TDC::TDC(const TDC &tdc)
{
    this->set_name(tdc.name);
    this->set_id(tdc.id);
    this->set_no_id(tdc.no_id);
    this->set_security(tdc.security_id);
    this->set_expired_date(tdc.expired);
}

std::string TDC::get_security()
{
    return this->security_id;
}

std::string TDC::get_no_id()
{
    return this->no_id;
}
std::string TDC::get_id()
{
    return this->id;
}
std::string TDC::get_name()
{
    return this->name;
}
date TDC::get_expired_date()
{
    return this->expired;
}

int TDC::set_security(std::string sec)
{
    if((search_numbers(sec)) and ( sec.size() == 3))
    {
        this->security_id = sec;
        return 0;
    }

    return 1;
}

int TDC::set_no_id(std::string noi)
{
    if((search_numbers(noi)) and ( noi.size() == 16))
    {
        this->no_id = noi;
        return 0;
    }

    return 1;

}

int TDC::set_id(std::string idd)
{
    if((search_numbers(idd)) and ( idd.size() == 8))
    {
        this->id = idd;
        return 0;
    }

    return 1;
}

int TDC::set_name(std::string nam)
{
    if (contains_number(nam) == 0)
        {
            this->name = nam;
            return 0;
        }

        return 1;
}

int TDC::set_expired_date(date exp)
{
    if(exp.month >= 1 and exp.month <= 12 and exp.year >= 2018)
    {
        this->expired = exp;
        return 0;
    }

    return 1;
}