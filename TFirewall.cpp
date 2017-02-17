#include "TFirewall.h"

TFirewall::~TFirewall() {

}

TFirewall::TFirewall()
{
    Name = "Unknown";
    Number = 0;
}

TFirewall::TFirewall(const std::string & name, int number)
{
    Name = name;
    Number = number;
}

void TFirewall::SetValues(const std::string &name, int number)
{
    Name = name;
    Number = number;
}

bool TFirewall::Check(const int classNum)
{
    return (Number <= classNum);
}

// print Name
const std::string &TFirewall::getName() const
{
    return Name;
}

// print Number
int TFirewall::getNumber() const
{
    return Number;
}

std::ostream & operator<<(std::ostream &out, const TFirewall &str)
{
    out << "Name: " << str.getName() << std::endl;
    out << "Number" << str.getNumber() << std::endl;
    return out;
}







