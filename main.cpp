#include <iostream>
  
using namespace std; 

    string convertIntToRoman(int integerValueToConvert) {

        std::string romanLetters[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int integerValues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

        std::string result = "";

        for (int i = 0; i < 13; ++i) {
            while(integerValueToConvert - integerValues[i] >= 0) {
                result += romanLetters[i];
                integerValueToConvert -= integerValues[i];
            }
        }
        return result;
    }

int main() {  
    int integerValueToConvert = 3999;
	std::cout << "Wert als Integer " << integerValueToConvert << " : Als römische Zíffer " << convertIntToRoman(integerValueToConvert) << std::endl;
    return 0;  
}
