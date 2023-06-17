#include <iostream>
#include "A.h"

int main()
{
    A a1;
    A a2(10); //10 Ц размер массива 
    A a3 = a2;
    a1 = a3;
    a2 = A(20);
    const A a4(5);

    for (int i = 0; i < a2.size(); i++)
    {
        std::cout << a4[i];
    }

}
