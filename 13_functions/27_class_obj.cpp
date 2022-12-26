#include <iostream>
using namespace std;
class Rectangle{
    private:
        int length, width;
    public:
        Rectangle(){
            this->length = this->width = 0;
        }
        Rectangle(int len, int wid);
        int area();
        int perimeter();
};
Rectangle::Rectangle(int length, int width){
    this->length = length;
    this->width = width;
}
int Rectangle::area(){
    return this->length * this->width;
}
int Rectangle::perimeter(){
    return 2 * (this->length + this->width);
}
int main(){
    Rectangle box(20, 15);
    cout << "Area of Box:\t" << box.area();
    cout << endl << "Perimeter of Box:\t" << box.perimeter();
    Rectangle lunchBox(20, 18);
    cout << endl << "Area of Lunch box:\t" << lunchBox.area();
    cout << endl << "Perimeter of Lunch box:\t" << lunchBox.perimeter();
    return 0;
}