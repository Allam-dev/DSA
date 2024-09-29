#include <iostream>
#include <string.h>
#define nl '\n'
using namespace std;


// const to prevent editing just reading
void print_string(const char str[])// char str[] = char* str
{
    int i = 0;
    while (*str != '\0')
    {
        printf("%c", str[i]);
        str++;
    }
    cout << nl;
}

int main()
{
    char name_without_null_char[5] = {0};
    name_without_null_char[0] = 'a';
    name_without_null_char[1] = 'l';
    name_without_null_char[2] = 'l';
    name_without_null_char[3] = 'a';
    name_without_null_char[4] = 'm';

    char name_with_null_char_and_size_fit[6] = {0};
    name_with_null_char_and_size_fit[0] = 'a';
    name_with_null_char_and_size_fit[1] = 'l';
    name_with_null_char_and_size_fit[2] = 'l';
    name_with_null_char_and_size_fit[3] = 'a';
    name_with_null_char_and_size_fit[4] = 'm';
    name_with_null_char_and_size_fit[5] = '\0';

    char name_with_null_char_and_size_over[10] = {0};
    name_with_null_char_and_size_over[0] = 'a';
    name_with_null_char_and_size_over[1] = 'l';
    name_with_null_char_and_size_over[2] = 'l';
    name_with_null_char_and_size_over[3] = 'a';
    name_with_null_char_and_size_over[4] = 'm';
    name_with_null_char_and_size_over[5] = '\0';

    // when I run this code it affects on `name_with_null_char_and_size_over` and delete some of chars , wow
    // char name_with_null_char_and_size_less[2] = {0};
    // name_with_null_char_and_size_less[0] = 'a';
    // name_with_null_char_and_size_less[1] = 'l';
    // name_with_null_char_and_size_less[2] = 'l';
    // name_with_null_char_and_size_less[3] = 'a';
    // name_with_null_char_and_size_less[4] = 'm';
    // name_with_null_char_and_size_less[5] = '\0';

    char name_with_double_qutation[100] = "allam";
    char name_with_double_qutation_and_empty_size[] = "allam";
    // u can do this => chat *my_str = "allam"; but can't to do thsi => my_str[0] = 'x'
    // compilation error => char name_with_double_qutation_and_less_size[2] = "allam";
    // can do chat name_with_double_qutation[] = "allam"
    // but can't do this
    // char name_with_double_qutation[size_or_not];
    // name_with_double_qutation = "the value"

    printf("name_without_null_char                      =  %s    len = %d  \n", name_without_null_char, strlen(name_without_null_char));
    printf("name_with_null_char_and_size_fit            =  %s    len = %d  \n", name_with_null_char_and_size_fit, strlen(name_with_null_char_and_size_fit));
    printf("name_with_null_char_and_size_over           =  %s    len = %d  \n", name_with_null_char_and_size_over, strlen(name_with_null_char_and_size_over));
    // printf("name_with_null_char_and_size_less        =  %s    len = %d  \n", name_with_null_char_and_size_less, strlen(name_with_null_char_and_size_less));
    printf("name_with_double_qutation                   =  %s    len = %d  \n", name_with_double_qutation, strlen(name_with_double_qutation));
    printf("name_with_double_qutation_and_empty_size    =  %s    len = %d  \n", name_with_double_qutation_and_empty_size, strlen(name_with_double_qutation_and_empty_size));

    cout << nl << nl << nl;

    cout << "name_without_null_char" << nl;
    print_string(name_without_null_char);
    cout
        << "name_with_null_char_and_size_fit" << nl;
    print_string(name_with_null_char_and_size_fit);

    cout << "name_with_null_char_and_size_over" << nl;
    print_string(name_with_null_char_and_size_over);

    cout << "name_with_double_qutation" << nl;
    print_string(name_with_double_qutation);

    cout << "name_with_double_qutation_and_empty_size" << nl;
    print_string(name_with_double_qutation_and_empty_size);

    return 0;
}