#include <iostream>
#include <iomanip>
#include <array>

int main(int argc, char const *argv[])
{
    const size_t responseSize = 20;
    const size_t frequencySize = 6;

    int data;

    const std::array<int, responseSize> responses = {data};

    std::array<int, frequencySize> frequency = {};

    while(data != -1)
    {
        std::cout << "enter data: ";
        std::cin >> data;
    }
    for (size_t answer = 0; answer < responses.size(); ++answer)
    {
        ++frequency[responses[answer]];
    }

    std::cout << "Rating" << std::setw(17) << "Frequency" << std::endl;

      for (size_t rating = 1; rating < frequency.size();++rating) {

        std::cout << std::setw(6) << rating << std::setw(17) << frequency[rating] << std::endl;

      }
        return 0;
}
