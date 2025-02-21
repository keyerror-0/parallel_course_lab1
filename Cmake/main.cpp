#include <iostream>
#include <cmath>

#ifdef USE_FLOAT
    #define TYPE float
#else    
    #define TYPE double
#endif

int main(int argc, char** argv)
{
    int size = 10000000;
    TYPE *arr = new TYPE[size];
    TYPE sum = 0;

    for (int i = 0; i < size; i++)
    {
        arr[i] = sin((i* M_PI * 2)/size);
        sum += arr[i];
    }
    
    std::cout << "сумма значений синусов на промежутке 2п: " << sum  << " использован тип" << typeid(TYPE&).name() << std::endl;

    delete [] arr;

    return 0;
}


