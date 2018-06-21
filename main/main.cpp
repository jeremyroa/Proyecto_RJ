#include <menu.h>
#include <food_user.h>
#include <system.h>
#include <iostream>

int main(){

    /* Menu a;

    Food c;

    c.set_name("Arroz chino");
    c.set_price(20.89);

    *//*

    b.second = "Plato fuerte";
    b.first = c;

    a.set_catalog_item(b);

    for(auto i : a.get_catalog())
    {
        std::cout << i.second << "\n";
        for(auto j : i.first)
        {
            std::cout << j.get_name() << "-" << j.get_price() << "\n";
        }
    }

    c.set_name("Pizza");
    c.set_price(9.99);
    b.second = "Entrada";
    b.first = c;
    a.set_catalog_item(b);

    c.set_name("Arepa");
    b.first = c;
    a.set_catalog_item(b);
    std::cout << "\n\n\n";

    for(auto i : a.get_catalog())
    {
        std::cout << i.second << "\n";
        for(auto j : i.first)
        {
            std::cout << j.get_name() << "-" << j.get_price() << "\n";
        }
    }

    c.set_name("Pizza");
    b.first = c;
    a.remove_catalog_item(b);

    std::cout << "\n\n\n";

    for(auto i : a.get_catalog())
    {
        std::cout << i.second << "\n";
        for(auto j : i.first)
        {
            std::cout << j.get_name() << "-" << j.get_price() << "\n";
        }
    }*/

    Food_user client;
    std::vector<rest> fav;

    fav.push_back(mexican);
    fav.push_back(venezuelan);
    client.set_sex('M');
    client.set_age(20);
    client.set_city("Merida");
    client.set_email("1234567890@gmail.com");
    client.set_state("Merida");
    client.set_id("26021817");
    client.set_fav(fav);

    System a;

    a.create_database();

    /*if(a.add_user(client) == 1)
    {
        std::cout << "Lo esta insertando\n";
    }else std::cout << "No lo esta insertando\n";

    a.login_user("26021817","NULL");

    std::cout << a.client.get_id() << "\n";*/

    Restaurant r;

    r.set_rif("J123456789");

    r.set_address("Casa Jeremy");

    r.set_type_rest(fast);

    r.set_state("Merida");

    std::pair<Food, std::string> b;

    b.second = "Plato Fuerte";

    std::cout << "Estoy bien";

    Food test;

    test.set_name("Arroz Chino");
    test.set_price(10002.3);
    test.set_image("44784814..//");

    b.first = test;
    b.second = "Plato Fuerte";


    r.menu.set_catalog_item(b);


    a.add_rest(r);


    return 0;
}