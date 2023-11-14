#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

class Box
{
private:
    /* data */
    int m_width{0};
    int m_length{0};
    int m_heigth {0};
public:
    Box(){}
    explicit Box(int i): m_width(i), m_length(i), m_heigth(i){}

    Box (int width, int length, int heigth) : m_width(width), m_length(length), m_heigth(heigth){}
    int Volume(){return m_width * m_length * m_heigth;}

    void printDimensions(){
        cout << "Largura:" << m_width << ", Comprimento: " << m_length << ", Altura: " << m_heigth;

    }
 };
 int main() {
     
    Box b;
    cout << "Box b.: ";
    b.printDimensions();
    cout << "Volume: " << b.Volume() << endl;

    
    return 0;
 }
 