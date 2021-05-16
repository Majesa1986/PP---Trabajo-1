#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Introduce tu nombre: ";
    cin >> name;
    cout << "Hola " << name << std::endl;

    cin.ignore();
    cin.get();

    return 0;
}
