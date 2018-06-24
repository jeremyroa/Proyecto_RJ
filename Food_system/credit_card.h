#ifndef TDC_H
#define TDC_H

#include <iostream>
#include <vector>
#include <user.h>

struct date
{
    int month,year;
};

class TDC
{
    protected:

      std::string security_id;
      std::string no_id;
      std::string id;
      std::string name;
      date expired;

    public:

      TDC();
      TDC(const TDC &);
      ~TDC(){};

      std::string get_security();
      std::string get_no_id();
      std::string get_id();
      std::string get_name();
      date get_expired_date();

      int set_security(std::string);
      int set_no_id(std::string);
      int set_id(std::string);
      int set_name(std::string);
      int set_expired_date(date);
};

bool contains_number(const std::string &);

#endif

