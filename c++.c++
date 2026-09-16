#include <iostream>

int main() {
    int number;

    std::cout << "=== Вариант 10 ===" << std::endl;
    std::cout << "Проверка произведения цифр четырехзначного числа"
              << std::endl;

    std::cout << "Введите четырехзначное число: ";
    std::cin >> number;

    if (number < 1000 || number > 9999) {
        std::cout << "Ошибка: необходимо ввести четырехзначное число."
                  << std::endl;
        return 1;
    }

    int first = number / 1000;
    int second = (number / 100) % 10;
    int third = (number / 10) % 10;
    int fourth = number % 10;

    int firstProduct = first * second;
    int secondProduct = third * fourth;

    bool result = (firstProduct == secondProduct);

    std::cout << "Произведение первых двух цифр: "
              << firstProduct << std::endl;

    std::cout << "Произведение последних двух цифр: "
              << secondProduct << std::endl;

    std::cout << "Результат: " << std::boolalpha << result << std::endl;

    return 0;
}