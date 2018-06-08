#include <menu.h>
#include <iterator>
Menu::Menu()
{
    this->catalog.empty();
}
Menu::Menu(const Menu &m)
{
    this->catalog = m.catalog;
}

std::list<std::pair<std::list<Food>, std::string>> Menu::get_catalog()
{
    return this->catalog;
}

int Menu::set_catalog_all(std::list<std::pair<std::list<Food>, std::string>> cat)
{
    this->catalog = cat;
    return 0;
}

int Menu::set_catalog_item(std::pair<Food, std::string> cop)
{
    for (auto &cat : this->catalog)
    {
        if (cat.second == cop.second)
        {
            for (auto &foo : cat.first)
            {
                if (foo.get_name() == cop.first.get_name())
                {
                    return 1;
                }
            }
            cat.first.push_back(cop.first);
            return 0;
        }
    }
    std::pair<std::list<Food>, std::string> aux;
    aux.first.push_back(cop.first);
    aux.second = cop.second;
    this->catalog.push_back(aux);
    return 0;    
}

int Menu::remove_catalog_item(std::pair<Food, std::string> cop)
{
    int i = 0,ban = 0, j = 0;
    for(auto &cat : this->catalog){
        if(cat.second == cop.second){
            for(auto &foo : cat.first)
            {
                if(foo.get_name() == cop.first.get_name()){
                    auto rm = foo;
                    cat.first.remove(rm);
                    ban = 1;
                    break;
                }
                i++;
            }
            if((ban == 1) and (cat.first.empty())){
                auto ax = this->catalog.begin();
                advance(ax,j);
                this->catalog.erase(ax);

            }
            if(ban == 1){
                return 0;
            }
            return 1;
        }
        j++;
    }
    return 1;
}