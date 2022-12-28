
#include <string>

class City
{
private:
    std::string name;
    double inhabitants;
    std::string mayor;
    double area;

public:
    //setters
    void setName(std::string& newname);
    void setInhabitants(double newinhabitants);
    void setMayor(std::string& newmayor);
    void setArea(double newarea);
    //getters
    std::string getName();
    double getInhabitants();
    std::string getMayor();
    double getArea();
    //service method
    void print();
};