#include <iostream>
#include <math.h>

using namespace std;
float f(float x)//функция f(x)
{
    return 3*x-4*log(x)-5;
}
float fproiz(float x)//производная функции f(x)
{
    return 3-4/x;

}
int main() 
{
    float x=3;
    int k=0;
    while (abs(x-(x-(f(x)/fproiz(x))))>0.000001)//выполняем цикл, пока разница между иксами больше  точностиВ
    {
        k=k+1;
        x=x-(f(x)/fproiz(x));//вычисление значения нового x по формуле x=x-(f(x)/f'(x))
        cout<<'x'<<k<<" = "<<x<<endl;
    }
    //программа выводит x1 = 3.23667 x2 = 3.22996 x3 = 3.22996
    return 0;
}
