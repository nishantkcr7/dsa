#include<iostream>
using namespace std;
class Student{
    private:
        int roll;
        int age;
        int marks[3];
    public:
        Student(int roll, int age, int *mark){
            this->roll = roll;
            this->age = age;
            for(int i = 0; i < 3; i++){
                this->marks[i] = mark[i];
            }
        }
        void getStudentDetail(){
            cout << endl << "Roll:\t" << this->roll << "\nAge:\t" << this->age << endl;
            cout << "Mark:\n";
            for(int i = 0; i < 3; i++){
                cout << "Mark-" << i+1 << ":\t" << this->marks[i] << endl;
            }
        }
};
int main(){
    int markNishant[] = {98,93, 95};
    Student nishant(11814, 23, markNishant);
    nishant.getStudentDetail();
    return 0;
}