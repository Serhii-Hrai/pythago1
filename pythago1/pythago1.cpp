#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Pythagoras
{
public:
    int getHypo(int xDiff, int yDiff) {
        return sqrt(xDiff * xDiff + yDiff * yDiff);
    }
    float getHypo(float xDiff, float yDiff) {
        return sqrt(xDiff * xDiff + yDiff * yDiff);
    }
    string getHypo() {
        return "Hypotenuse ";
    }
};

int main()
{
    Pythagoras pyth;
    cout << pyth.getHypo() << pyth.getHypo(4, 3) << "\n";
    cout << pyth.getHypo() << pyth.getHypo(4.0f, 3.0f) << "\n";
    return 0;
}