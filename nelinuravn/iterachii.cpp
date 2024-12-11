#include <iostream>
#include <math.h>
using namespace std;
float fi(float x) // Функция fi(x)
{
    return (4 *log(x)+5)/3; 
}


int main() 
{
    int k=0;
     float x=3;
    while ((abs(x-fi(x)))>0.000001)//выполняем цикл, пока разница между х не будет меньше точности
    {
        k=k+1;
        x=fi(x);//вычисление значения нового x
        cout<<'x'<<k<<" = "<<x<<endl;
    }
    
    return 0;


}
