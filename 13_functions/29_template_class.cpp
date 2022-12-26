#include<iostream>
using namespace std;
template <class T>
class Arthmetic{
    private:
        T length;
        T width;
    public:
        Arthmetic();
        Arthmetic(T length, T width);
        T area();
        T perimeter();
        // getArthmetic();
};
template <class T>
Arthmetic<T>::Arthmetic(){
    this->length = this->width = 0;
}
template <class T>
Arthmetic<T>::Arthmetic(T len, T wid){
    this->length = len;
    this->width = wid;
}
/*
template <class T>
void Arthmetic<T>::getArthmetic(){
    cout << endl << "Length:\t" << this.length << "\nWidth:\t" << this.width;
}
*/
template<class T>
T Arthmetic<T>::area(){
    return this->length * this->width;
}
template<class T>
T Arthmetic<T>::perimeter(){
    return 2 * (this->length + this->width);
}
int main(){
    Arthmetic<int> art(5, 3);
    // art.getArthmetic();
    cout << endl <<  "Area:\t" << art.area();
    return 0;
}