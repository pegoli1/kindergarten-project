#include <string>

using namespace std;

class Board {
private:
    string color;
    float width;
    float height;
    float price;

public:
    Board();

    Board(string color, float width, float height, float price);

    string getColor();

    void setColor(string color);

    float getWidth();

    void setWidth(float width);

    float getHeight();

    void setHeight(float height);

    float getPrice();

    void setPrice(float price);
};
