#include <iostream>
#include <fstream>

int main()
{
    const int size = 150;
    char buffer[size];
    
    std::cout << "Enter poem. Enter '&' to finish." << std::endl;
    std::cin.getline(buffer, size, '&');

    std::ofstream fout("poem.txt");

    if (!fout)
    {
        std::cerr << "Recording failed" << std::endl;
    }

    fout << buffer;
    
    fout.close();

    return 0;
}