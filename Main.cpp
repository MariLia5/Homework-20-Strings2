#include <iostream>
#include<cstring>
#include<string>
#include<stdlib.h>
#include <algorithm>

// Функция 1
int mystrcmp(const char* str1, const char* str2) 
{
    std::cout << ::memcmp(str1, str2, 1000) << '\n';
    return memcmp(str1, str2, 1000);
}

// Функция 2
int StringToNumber(char* str) 
{
    int myint = std::stoi(str);
    std::cout << myint << '\n';
    return myint;
}

// Функция 3
char* NumberToString(int number)
{
    char* str_buffer = new char[20];
    snprintf(str_buffer, 20, "%d", number);
    return str_buffer;
}
// Функция 4
char* Uppercase(char* str1)
{
    for (int i = 0; i < strlen(str1); i++)
    { 
        putchar(toupper(str1[i]));
    }
    return str1;
}

// Функция 5
char* Lowercase(char* str1)
{
    for (int i = 0; i < strlen(str1); i++)
    {
        putchar(tolower(str1[i]));
    }
    return str1;
}
// Функция 6
char* mystrrev(char* str)
{
    std::reverse(str, str + std::strlen(str));
    return str;
}

int main()
{
    // Функция 1
    char str1[1000] = "In this quintessential Shakespearean drama, Hamlet's halting pursuit of revenge for his father's death unfolds in a series of highly charged confrontations that climax in tragedy. The play is reprinted here from an authoritative British edition complete with illuminating footnotes.";
    char str2[1000] = "Shakespeare's bleak and brutal tragedy begins when an ageing king, seeking a successor, rejects the young daughter who loves him and misplaces his trust in her malevolent sisters. In return they strip him of his power and condemn him to a wretched wasteland of horror and insanity. Set in a pitiless universe, King Lear is a towering, elemental masterpiece of fierce poetry and vast imaginative scope.";
    mystrcmp(str1, str2);

    // Функция 2
    char str3[10] = "123456789";
    StringToNumber(str3);

    // Функция 3
    int a = 987654321;
    char* str4 = NumberToString(a);
    NumberToString(a);
    std::cout << str4 << std::endl;

    // Функция 4
    char str5[100] = "In this quintessential Shakespearean drama.";
    Uppercase(str5);

    // Функция 5
    char str6[100] = "IN THIS QUINTESSENTIAL SHAKESPEAREAN DRAMA.";
    Lowercase(str6);

    // Функция 6
    char str7[100] = "In this quintessential Shakespearean drama.";
    std::string reversed = mystrrev(str7);
    std::cout << reversed << std::endl;
}
