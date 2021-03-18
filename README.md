# Tutorial Convert Arabic Numerals To Roman Letters for Cpp

Small example how an Integer can be converted into roman letters.

Key component are the following two lines which are the basis of the conversion:


```
const std::string romanLetters[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
const int integerValues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
```

When used, I insert the number of entries int the arrays (13) hard. This is just performance thing. In the sample the set is fix, they can't grow or shrink so I know before the compile that there are 13 entries. No need to determine the array size with something like .size().

Furthermore the integer value to convert is also hard coded. To show how the conversion can go, it will be enough. If needed just call convertIntToRoman(int integerValueToConvert) multiple times for all desired values.
