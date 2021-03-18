#include <iostream>
  
using namespace std; 

    string convertIntToRoman(int n) {

        string romanLetters[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int integerValues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

        string result = "";

        for (int i = 0; i < 13; ++i)
        {
            while(n - integerValues[i] >= 0)
            {
                result += romanLetters[i];
                n -= integerValues[i];
            }
        }
        return result;
    }

int main() {  
    int n = 3999;
	cout << "Integer " << n << " : Roman " << convertIntToRoman(n) << endl;
    return 0;  
}
