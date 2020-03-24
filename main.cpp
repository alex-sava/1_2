// Классы. Построение прямоугольника по координатам левого нижнего и правого верхнего углов

#include <iostream> 
#include <windows.h>
#include "rectangles.h" 


using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Rectangles rec;
    rec.Input();
    rec.Raschet();
    rec.Result();

    system("pause");
    return 0; 
}