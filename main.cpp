/**
 * @todo Die Kommentare können eigentlich in die Readme.
 * Möglichkeit: For Schleife noch auslagern damit es kürzer wird?
 * Jedoch wäre das nur noch ein Auslagern um des Auslagern willens.
 */

#include <iostream>
  
using namespace std; 

    string convertIntToRoman(int integerValueToConvert) {

        /**
         * Das hier ist das für diese Lösung kritische Sache.
         * Die Sonderfälle, ein Step vor den nächstgrößeren.
         * Mathe, 5 Klasse Herr Diszberger ;)
         */
        const std::string romanLetters[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        const int integerValues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

        /**
         * Das hier sieht hässlich aus.
         * Könnten aber die zwei Guinness auf einen Joghurt sein
         */
        std::string result = "";

        /**
         * Die 13 ist hier hart hinterlegt, ein romanLetters.size() würde nur unnötig 
         * Rechenzeit benötigen. Es ist bekannt und die Länge ist fix, nicht dynamisch.
         */
        for (int i = 0; i < 13; ++i) {
            while(integerValueToConvert - integerValues[i] >= 0) {
                result += romanLetters[i];
                integerValueToConvert -= integerValues[i];
            }
        }
        return result;
    }

int main() {  
    /**
     * Eigentlich könnte ich hier von der Tastatur einlesen um bei einer neuen Zahl den Compile wegfallen
     * zu lassen. Müsste ich aber mehr einbinden und für die Lösung unerheblich.
     */
    const int integerValueToConvert = 2999;
	std::cout << "Wert als Integer " << integerValueToConvert << " : Als römische Zíffer " << convertIntToRoman(integerValueToConvert) << std::endl;
    return 0;  
}
