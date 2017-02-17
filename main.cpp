#include "TFirewall.h"
#include <sstream>

std::string Int_v_String(int a)
{
    std::stringstream ss;
    ss << a;
    return ss.str();
}

int main() {
    int k = 0;
    std::cout << "Enter number of Firewall: " << std::endl;
    std::cin >> k;
    if(k > 5)
    {
        std::cout << "EROR" << std::endl << "NO ACCESS" << std::endl;
        return 0;
    }

    int n = 5;
    TFirewall *firewall = new TFirewall[n];

    std::string str;
    //str[0] = '\0';
    for (int i = 0; i < n; i++)
    {
        int number = i+1;
        std::string name = "Firewall-";
        str = Int_v_String( number );
        name += str;
        firewall[i].SetValues(name, number);
    }

    for (int j = 0; j < n; j++)
    {
        if(firewall[j].Check(k))
        {
            std::cout << "№" << firewall[j].getNumber() << " Firewall name is: " << firewall[j].getName() <<std::endl;
        }
    }

    delete[] firewall;

    system ("pause");
    return 0;
}