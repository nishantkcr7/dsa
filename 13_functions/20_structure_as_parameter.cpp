#include <iostream>
using namespace std;
struct Rectangle{
    int length;
    int width;
};
int getStructureArea(struct Rectangle rect){
    return rect.length * rect.width;
}
void getRectangleDetails(struct Rectangle rect){
    cout << endl << "Details:" << endl;
    cout << "Length: " << rect.length << endl;
    cout << "Width: " << rect.width << endl;
}
void setRectangleLength(struct Rectangle *rect, int newLength){
    rect->length = newLength;
}
void setRectangleWidth(struct Rectangle *rect, int newWidth){
    rect->width = newWidth;
}
int main(){
    struct Rectangle rectangle = {5, 10};
    // Getting details of the rectangle
    getRectangleDetails(rectangle);
    // Printing the area of the rectangle
    cout << "Area of rectangle: " << getStructureArea(rectangle);
    // Changing the length of the rectangle
    setRectangleLength(&rectangle, 8);
    // Printing details of rectangle after changing the lenght
    getRectangleDetails(rectangle);
    // Changing the width of the rectangle
    setRectangleWidth(&rectangle, 20);
    // Printing the details of the rectangle
    getRectangleDetails(rectangle);
    // Printing the area of the rectangle
    cout << endl << "Area of the rectangle: " << getStructureArea(rectangle) << endl;
    return 0;
}