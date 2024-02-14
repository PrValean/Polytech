#include <iostream> 
#include <string> 

using namespace std;

struct Date { 
    int day; 
    int month; 
    int year; }; 

struct Person { 
    string name; 
    int age; 
    Date birthdate; };

bool isDateValid(const Date& date) {

    if (date.day < 1 || date.day > 31 || date.month < 1 || date.month > 12 || date.year > 2024) { 
    return false; 
    }   
    
return true; 
} 
 
int main() { 
    Person person;

    cout << "Enter a name: "; 
    cin >> person.name; 

    cout << "Enter the age: "; 
    cin >> person.age; 

    cout << "Enter the date of birth (day, month, year): " << '\n'; 
    cout << "Day:" << " "; cin >> person.birthdate.day;
    cout << "Month (1-12): " << " "; cin >> person.birthdate.month;
    cout << "Year (....)" << " "; cin >> person.birthdate.year; 

    if (!isDateValid(person.birthdate)) { 
        cout << "Wrong date of birth!" << endl; 
        return 1; 
    } 

        cout << "Name: " << person.name << endl; 
        cout << "Age: " << person.age << endl; 
        cout << "Date of birth: " << person.birthdate.day << "." << person.birthdate.month << "." << person.birthdate.year << endl;
        
        return 0; 
}