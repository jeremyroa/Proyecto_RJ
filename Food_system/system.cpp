#include <system.h>
#include <sstream>
#include "qdebug.h"

System::System()
{
    client = Food_user();
    r = Restaurant();

    this->create_database();
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
    if(arch.peek() != '0'){
        arch.close();
        return 0;
    }
    arch.close();

    return -1;
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
            return -1;
        
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

        qDebug() << "Add user: " << QString::fromStdString(client.get_city()) << "---";

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
        return 0;
    }
    else
    {
        return -1;
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




////// Metodos de restaurant
int System::add_rest(Restaurant new_r)
{
    int mov = 111;
    int hash;

    char car;


    std::hash<std::string> hash_rest;
    hash = hash_rest(new_r.get_rif()) % 10000;

    qDebug() << hash << "\n" ;

    if (confirmation_rests(hash, 111, "../database/restaurants.txt",new_r.get_rif()) == 0)
    {
        qDebug() << QString::fromStdString(new_r.get_rif())<< "---" << QString::fromStdString(new_r.get_password());
        std::fstream arch;
        arch.open("../database/restaurants.txt");
        arch.seekp((hash - 1)*mov);
        arch << std::left << std::setw(2) << "0";
        arch << std::left << std::setw(10) << new_r.get_rif() << ":";
        arch << std::left << std::setw(33) << new_r.get_name() << ":";
        arch << std::left << std::setw(50) << new_r.get_email() << ":";
        arch << std::left << std::setw(8) << new_r.get_password() << ":";
        arch << std::left << std::setw(3) << static_cast<int>(new_r.get_type_rest())<< "\n";

        arch.close();

        std::string def = "../database/rest/" + new_r.get_rif();
        mkdir(def.c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
        std::string info = def + "/" + new_r.get_rif() + "_info.txt";
        std::string o = def + "/" + new_r.get_rif() + "_orders_temporal.txt";
        std::string ord = def + "/" + new_r.get_rif() + "_orders.txt";
        std::string menu = def + "/" + new_r.get_rif() + "_menu.txt";
        std::string orda = def + "/" + new_r.get_rif() + "_orders_end.txt";

        
        std::ofstream we;
        we.open(orda);
        we.close();
        we.open(info);

        if(!we.is_open())
          return -1;

        we << new_r.get_image() << "\n";
        
        we << new_r.get_state() << ":" << 
        new_r.get_city()
        << ":" << new_r.get_address() << "\n";

        for(auto i: new_r.get_tlf())
        {
            we << i << ":";
        }

        we << "\n";

        we << new_r.get_description() << "\n";

        TDC temp;

        temp = new_r.get_tdc();

        date temp_d = temp.get_expired_date();

        we << temp.get_id() << ":" << temp.get_name()
        << ":" << temp.get_no_id() << ":" << temp.get_security()
        << ":" << temp_d.month << ":" << temp_d.year
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
                /*std::string aux = j.get_image();
                std::string aux_2;

                int i;

                for(i = (aux.size() - 1); i >= 0 ; i--)
                {
                   if(aux[i] == '/') break;
                }


                aux_2 = aux.substr(i);


                aux = "cp "+aux+" "+"../database/rest" + new_r.get_rif();
                system(aux.c_str());

                aux_2 = "../database/rest/" + new_r.get_rif() + aux_2;

                qDebug() << QString::fromStdString(aux_2) << "-----\n";*/

                //j.set_image(aux);
                we << " " << j.get_name() << ":" << j.get_price() << ":" << j.get_image() << "\n";
            }
        }

        we.close();

        we.open(o);
        we.close();
        we.open(ord);
        we.close();

        return 0;
    }else return -1;
}

int System::login_rest(std::string rif, std::string pas)
{
    int mov = 111;
    int hash;

    std::hash<std::string> hash_rest;
    hash = hash_rest(rif) % 10000;
    std::string man,r,p,n,bar,em,t;
    std::ifstream arch;
    arch.open("../database/restaurants.txt");

    arch.seekg((hash - 1) * mov,std::ios::beg);
    
    
    if(arch.peek() == '0')
    {
        std::getline(arch,man,'\n');
        man = man.substr(2);
        std::stringstream ar(man);
        std::getline(ar,r,':');
        std::getline(ar,n,' ');
        std::getline(ar,bar,':');
        std::getline(ar,em, ' ');
        std::getline(ar,bar, ':');
        std::getline(ar,p, ' ');
        std::getline(ar, bar, ':');
        std::getline(ar,t, ' ');
        

        if(r == rif and p == pas)
        {
            this->r.set_rif(r);
            this->r.set_password(p);
            this->r.set_name(n);
            this->r.set_email(em);
            int a = atoi(t.c_str());
            this->r.set_type_rest(static_cast<rest>(a));
            

            arch.close();

            std::string def = "../database/rest/" + this->r.get_rif();
            std::string info = def + "/" + this->r.get_rif() + "_info.txt";
            std::string o = def + "/" + this->r.get_rif() + "_orders_temporal.txt";
            std::string ord = def + "/" + this->r.get_rif() + "_orders.txt";
            std::string menu = def + "/" + this->r.get_rif() + "_menu.txt";

            
            arch.open(info);

            ///Img

            std::getline(arch,bar,'\n');

            this->r.set_image(bar);

            ///State

            std::getline(arch,bar,':');

            this->r.set_state(bar);

            ///City

            std::getline(arch, bar, ':');

            this->r.set_city(bar);

            ///Address

            std::getline(arch, bar, '\n');

            this->r.set_address(bar);

            ///Phones
            
            
            std::getline(arch, bar, '\n');
            std::string tel;
            std::stringstream var(bar);

            while(!var.eof()){                
                std::getline(var,tel,':');
                if(var.eof()) break;
                this->r.set_tlf(tel);                
            }


            std::getline(arch,bar,'\n');
            this->r.set_description(bar);

            ///Credit Card
            std::getline(arch, bar, ':');
            TDC ak;
            ak.set_id(bar);
            std::getline(arch, bar, ':');
            ak.set_name(bar);
            std::getline(arch, bar, ':');
            ak.set_no_id(bar);
            std::getline(arch,bar,':');
            ak.set_security(bar);
            std::getline(arch, bar, ':');            
            date cs;
            cs.month = atoi(bar.c_str());
            std::getline(arch, bar, '\n');
            cs.year = atoi(bar.c_str());
            ak.set_expired_date(cs);
            this->r.card = ak;

            arch.close();

            std::string abc,ghi;
            int cont = 0;

            arch.open(menu);
            Menu aux;
            std::pair<Food, std::string> b;            

            while(!arch.eof())
            {                
                std::getline(arch, abc, '\n');

                
                if(abc[0] == '-')
                {
                    abc = abc.substr(1);                    
                    b.second = abc;
                    

                    while(arch.peek() != '-' and arch.peek() != '\n' and (!(arch.eof())))
                    {
                        std::getline(arch,def,':');
                        def = def.substr(1);
                        b.first.set_name(def);
                        std::getline(arch,def,':');
                        std::string::size_type sz;
                        float kl = std::stof(def,&sz);
                        b.first.set_price(kl);
                        std::getline(arch,def,'\n');
                        b.first.set_image(def);
                        aux.set_catalog_item(b);

                        //std::cout << b.first.get_name() << " - " << b.first.get_image() << " - " << b.first.get_price();
                        
                    }

                    if(arch.eof()) break;

                }

            }
            this->r.menu = aux;
            arch.close();

            std::fstream arch_2;
            std::string ask;
            arch_2.open(ord, std::ios::in | std::ios::binary);
            if(!(arch_2.get() == -1))
            {
                arch_2.seekg(0,arch_2.end);
                while(1)
                {
                    arch_2.seekg(-53, std::ios::cur);
                    std::cout << "Aqui--- " << arch_2.peek() << "/--/" << arch_2.tellg() << "----" << "\n";
                    getchar();   
                    if(arch_2.peek() == '*'){
                        std::getline(arch_2,ask,' ');
                        ask = ask.substr(1);
                        this->r.flag = atoi(ask.c_str());
                        break;
                    }
                }
            }


            arch_2.close();
            return 0;
        }
        else
        {
            arch.close();
            return -2;
        }


    }
    else
    {
        arch.close();
        return -1;
    }
}
