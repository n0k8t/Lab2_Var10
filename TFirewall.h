#ifndef LAB_2_TFIREWALL_H
#define LAB_2_TFIREWALL_H

#include <iostream>
#include <string>

class TFirewall
{
private:
    std::string Name;
    int Number;


public:
    // dtor
    ~TFirewall();

    // default ctor
    TFirewall();

    // user ctor
    TFirewall(const std::string & name, int number);

    void SetValues(const std::string & name, int number);

    // проверка допуска
    bool Check(const int classNum);

    // печать
    const std::string &getName() const;

    // печать
    int getNumber() const;

    friend std::ostream& operator << (std::ostream&, const TFirewall & h);
};

std::ostream& operator << (std::ostream& out, const TFirewall & h);
#endif //LAB_2_TFIREWALL_H

// конструктор +
// при  необходимости  функции  доступа  к  полям +
// функцию,  проверяющую можно  ли  МЭ  использовать  для  заданного  класса  (номер  заданного  класса –параметр функции)
// функцию печати параметров МЭ +

// Вывести на печать параметры тех МЭ, которые можно  использовать  для  заданного  класса  защищенности,  номер  класса  защищенности вводится с клавиатуры.