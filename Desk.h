#include <string>

using namespace std;

class Desk {
private:
    string color;
    float width;
    float height;
    float price;
public:
    Desk();

    Desk(string color, float width, float height, float price);

    string getColor();

    void setColor(string desk);

    float getWidth();

    void setWidth(float width);

    float getHeight();

    void setHeight(float height);

    float getPrice();

    void setPrice(float price);

};

