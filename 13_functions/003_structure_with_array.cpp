#include <iostream>
using namespace std;
struct Student{
    int roll, age;
    int marks[3];
};
void setStudent(struct Student *std, int roll, int age, int *mark){
    cout << endl << "Updating structure in process...";
    std->roll = roll;
    std->age = age;
    for(int i  = 0; i < 3; i++){
        std->marks[i] = mark[i];
    }
    cout << endl << "Updating structure completed.";
}
void getStudentDetail(struct Student *std){
    cout << endl << "Displaying student details...";
    cout << endl << "Roll:\t" << std->roll << "\nAge:\t" << std->age;
    cout << endl << "Marks:\n";
    for(int i = 0; i < 3; i++){
        cout << "Mark-" << i+1 << ": " << std->marks[i] << endl;
    }
    cout << endl << "Displaying student details complete.";
}
int main(){
    struct Student student;
    // Inserting into student
    int marksNishant[] = {95, 97, 93};
    setStudent(&student, 11814, 23, marksNishant);
    getStudentDetail(&student);

    // Nishant
    struct Student nishant;
    int nishantMark[] = {95,96,98};
    setStudent(&nishant, 11814, 23, nishantMark);
    getStudentDetail(&nishant);

    // AJ
    struct Student aj;
    int markAJ[] = {99,98,99};
    setStudent(&aj, 11828, 21, markAJ);
    getStudentDetail(&aj);
    return 0;
}