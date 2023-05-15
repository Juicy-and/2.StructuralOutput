#include <iostream>
#include <string>
struct adres
{
    std::string city = "Москва";
    std::string street = "Арбат";
    int houseNumber = 12;
    int apartamentNumber = 8;
    int indexCity = 123456;
};
void out_struct(adres a)
{
    std::cout << "Город: " << a.city << std::endl;
    std::cout << "Улица: " << a.street << std::endl;
    std::cout << "Номер дома: " << a.houseNumber << std::endl;
    std::cout << "Номер квартиры: " << a.apartamentNumber << std::endl;
    std::cout << "Индекс: " << a.indexCity << std::endl;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    adres a;
    out_struct(a);
    std::cout << '\n';
    adres* i = &a;
    i->city = "Ижевск";
    i->street = "Пушкина";
    i->houseNumber = 59;
    i->apartamentNumber = 143;
    i->indexCity = 953769;
    out_struct(*i);
    

}

