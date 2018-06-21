#include <system.h>
#include <sstream>

System::System()
{
    client = Food_user();
    r = Restaurant();
}

int confirmation_client(int pos, std::string arc,int mov, std::string id,int fill)
{
    std::fstream arch;
    arch.open(arc);

    if (!arch.is_open())
        return -1;
    arch.seekp(((pos - 1) * mov), std::ios::beg);
    
    std::string aux;
    int pos_free = -1;

    for(int i = 0; i < 4; i++)
    {
        std::cout <<arch.peek() << "/ \n";
       if (arch.peek() == '0')
       {
           std::getline(arch, aux, ' ');
           aux.clear();
           std::getline(arch, aux, ' ');
           if(id == aux)
           {
               arch.close();
               return -2;
           }
           else
           {
               //arch.seekp(fill);
               std::string aux_2;
               std::getline(arch,aux_2,':');
               aux_2.clear();
               continue;
           }

           arch.close();
           return false;
       }
       else
       {
           if(pos_free == -1) pos_free = i;
           std::cout << aux << "-\n";
           arch.seekp(fill+2);
       }
    }

    arch.close();
    return pos_free;
}

int confirmation_rests(int hash,int mov,std::string arc, std::string new_rest)
{
    std::fstream arch;
    arch.open(arc);

    if(!arch.is_open())
       return -1;

    arch.seekg((hash -1) * mov);
    if(arch.peek() == '0'){
        arch.close();
        return -1;
    }
    arch.close();

    return 0;
}

bool verify_database(std::string name_arch)
{
    std::fstream arc;

    arc.open(name_arch, std::ios::in);

    if (!arc.is_open())
        return true;
    else
        return false;
}

bool System::create_database()
{
    std::fstream database;

    if (verify_database("../database/food_users.txt") and 
    verify_database("../database/restaurants.txt"))
    {
        std::fstream arc("../database/food_users.txt", std::ios::out | std::ios::in | std::ios::trunc);

        if (!arc.is_open())
            return false;

        arc.clear();

        for (int i = 0; i < 10000; ++i)
        {
            arc << '1' << std::setfill(' ') << std::setw(73) << ':'
            << '1' << std::setfill(' ') << std::setw(73) << ':'
            << '1' << std::setfill(' ') << std::setw(73) << ':'
            << '1' << std::setfill(' ') << std::setw(73) << '\n';
        }

        arc.close();
        mkdir("../database/clients", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);

        arc.open("../database/restaurants.txt", std::ios::out | std::ios::in | std::ios::trunc);

        if (!arc.is_open())
            return false;

        for (int i = 0; i < 10000; ++i)
        {
            arc << '1' << std::setfill(' ') << std::setw(110) << '\n';
        }
        arc.close();

        mkdir("../database/rest", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
    }
    else return false;
}

int System::add_user(Food_user client)
{
    int mov = 296;
    int hash;
    int pos;

    char car;

    std::hash<std::string> hash_cl;
    hash = hash_cl(client.get_id()) % 10000;

    pos = confirmation_client(hash,"../database/food_users.txt",mov,client.get_id(),73);

    if(pos >= 0) 
    {
        std::fstream arch;
        arch.open("../database/food_users.txt");

        if (!arch.is_open())
            return false;
        
        arch.clear();
        if(pos == 0 )
            arch.seekp(((hash-1)*mov) + (pos*73));
        else if (pos == 1)
            arch.seekp(((hash - 1) * mov) + (pos * 73) + 1);
        else if (pos == 2)
            arch.seekp(((hash - 1) * mov) + (pos * 73) + 2);
        else if (pos == 3){
            arch.close();
            return 0;
        }

        arch << std::left << std::setw(2) << "0";
        arch << std::left << std::setw(8) << client.get_id() << " ";
        arch << std::left << std::setw(50) << client.get_email() << " ";
        arch << std::left << std::setw(11) << client.get_password() << ":";
        arch.close();

        std::string def = "../database/clients/" + client.get_id();
        mkdir(def.c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
        std::string info = def + "/" + client.get_id() + "_info.txt";
        std::string o = def + "/" + client.get_id() + "_orders.txt";
        std::ofstream we;
        we.open(info);
        we << " " << client.get_name() << ":" << client.get_lname() << ":" << client.get_age() << ":" << client.get_sex() << "\n" 
        << " " << client.get_phone() << ":" << client.get_state() << ":" << client.get_city() << "\n ";
        
        for(auto fly : client.get_fav())
        {
            we << static_cast<int>(fly) << ":";
        }

        we << "\n";
        we.close();
        we.open(o);
        we.close();
        ///std::cout << hash << "\n";
        return 1;
    }
    else
    {
        return 0;
    }

}

int System::login_user(std::string u, std::string p)
{
    int mov = 296;
    int hash;
    int pos;

    std::string us;
    std::string pas,correo;
    std::hash<std::string> hash_cl;
    hash = hash_cl(u) % 10000;
    std::fstream arch;
    arch.open("../database/food_users.txt");
    std::cout << hash << "/ \n";

    if (!arch.is_open())
        return -1;
    arch.seekg((hash-1)*mov);

    for(int i = 0; i < 3;i++){
        //std::cout << arch.peek() << "/ \n";
        if (arch.peek() == '0'){

            std::getline(arch, us, ' ');
            std::getline(arch, us, ' ');

            std::getline(arch,correo, ' ');
            std::getline(arch,pas,':');
            int j = 0;
            for(j = 0;j < pas.size();j++){
                if(pas[j] != ' '){
                    break;
                }            
            }
            pas = pas.substr(j);
            std::string ak;
            for(int i = 0;i < pas.size();i++){
                if(pas[i] == ' ')
                    break;
                ak += pas[i];
            }
            pas = ak;
            if (u == us and p == pas)
            {
                this->client.set_id(u);
                this->client.set_password(pas);
                this->client.set_email(correo);
                us = "../database/clients/" + u + "/" + u + "_info.txt";

                std::ifstream out(us);
                if(!out.good())
                    return -1;
                std::string info,na;
                int i = 1;
                while(!out.eof()){
                    std::getline(out,info,'\n');
                    if(i < 4)
                        info = info.substr(1);
                    std::stringstream info_string(info);
                    std::string::size_type sz;
                    if(i == 1){
                        std::getline(info_string,na,':');
                        this->client.set_name(na);
                        std::getline(info_string, na, ':');
                        this->client.set_lname(na);
                        std::getline(info_string, na, ':');
                        int as = atoi(na.c_str());
                        this->client.set_age(as);
                        std::getline(info_string, na, '\n');
                        this->client.set_sex(na[0]);
                    }
                    if(i == 2){
                        std::getline(info_string,na,':');
                        this->client.set_phone(na);
                        std::getline(info_string, na, ':');
                        this->client.set_state(na);
                        std::getline(info_string, na, '\n');
                        this->client.set_city(na);
                    }
                    if(i == 3){
                        std::vector<rest> arr;
                        while(!info_string.eof()){
                            std::getline(info_string, na,':');
                            if(contains_number(na))
                            {
                                //std::cout << na << "-\n";
                                int ve = atoi(na.c_str());
                                rest hp = static_cast<rest>(ve);
                                //std::cout << ve << "?\n";
                                arr.push_back(hp);
                            }
                        }
                        this->client.set_fav(arr);
                    }
                    i++;
                }
                out.close();
                arch.close();
                return 0;
            }

        }else{
            arch.seekg(74);
        }
    }
    arch.close();
    return 1;
}

int System::add_rest(Restaurant new_r)
{
    int mov = 111;
    int hash;

    char car;

    std::hash<std::string> hash_rest;
    hash = hash_rest(new_r.get_rif()) % 10000;

    if (confirmation_rests(hash, 111, "../database/restaurants.txt",new_r.get_name()) == 0)
    {
        std::fstream arch;
        arch.open("../database/restaurants.txt");
        arch.seekp((hash - 1)*mov);
        arch << std::left << std::setw(2) << "0";
        arch << std::left << std::setw(10) << new_r.get_rif() << " ";
        arch << std::left << std::setw(34) << new_r.get_name() << " ";
        arch << std::left << std::setw(50) << new_r.get_email() << " ";
        arch << std::left << std::setw(8) << new_r.get_password() << " ";
        arch << std::left << std::setw(3) << static_cast<int>(new_r.get_type_rest())<< "\n";

        arch.close();

        std::string def = "../database/rest/" + new_r.get_rif();
        mkdir(def.c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
        std::string info = def + "/" + new_r.get_rif() + "_info.txt";
        std::string o = def + "/" + new_r.get_rif() + "_orders_temporal.txt";
        std::string ord = def + "/" + new_r.get_rif() + "_orders.txt";
        std::string menu = def + "/" + new_r.get_rif() + "_menu.txt";

        std::ofstream we;

        we.open(info);

        if(!we.is_open())
          return -1;

        we << new_r.get_image() << "\n";
        
        we << new_r.get_state() << ":" << new_r.get_state()
        << ":" << new_r.get_address() << "\n";

        for(auto i: new_r.get_tlf())
        {
            we << i << ":";
        }

        we << "\n";

        we << new_r.get_description() << "\n";

        TDC temp;

        temp = new_r.get_tdc();

        we << temp.get_id() << ":" << temp.get_name()
        << ":" << temp.get_no_id() << temp.get_security()
        << ":" << temp.get_expired_date().month << temp.get_expired_date().year
        << "\n";

        we.close();

        we.open(menu);

        if (!we.is_open())
            return -1;

        Menu mun_temp = new_r.get_menu();

        for(auto &i: mun_temp.get_catalog())
        {
            we << "-" << i.second << "\n";
            for(auto &j : i.first)
            {
                we << " " << j.get_name() << ":" << j.get_price() << ":" << j.get_image() << "\n";
            }
        }

        we.close();     
    }else return -1;
}
