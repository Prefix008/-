#include <iostream>
#include <math.h>
using namespace std;
float f(float x) // Функция f(x)
{
    return 3*x-4*log(x)-5; 
}

float s(float left, float right, float e)
{   
    int k=0;
    while (right - left > e) 
    {   
        k=k+1;
        float mid = (right + left) / 2; // Находим середину интервала
        cout<<'x'<<k<<" = "<<mid<<endl;
        if (f(mid) == 0) 
        {
            return mid; // Если нашли корень до завершения цикла (дальше сужать интервал не нужно)
        } else if (f(mid) * f(left) < 0) //Корень находится между mid и left, то есть в левой части
        {
            right = mid; 
        } else 
        {
            left = mid; // Корень находится в правой части
        }
    }   
    return (left + right) / 2; // Возвращаем среднее значение
}

int main() 
{
    float left = 2; 
    float right = 4;
    float e = 0.000001; 

    s(left, right, e); 
    

    return 0;
}
