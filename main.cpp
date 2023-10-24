
// Many user-created passwords are simple and easy to guess. Write a program that takes a simple password
// and makes it stronger by replacing characters using the key below, and by appending "!" to the end of the input string.
//
//i becomes 1
//a becomes @
//m becomes M
//B becomes 8
//s becomes $
//Ex: If the input is: mypassword
//the output is: Myp@$$word!

#include <iostream>
#include <string>
#include <cctype>

int main() {

    std::string userPassword;
    std::cin >> userPassword;

    for (int i = 0; i < userPassword.size(); ++i) {
        if (userPassword.at(i) == 'i'){
            userPassword.at(i) = '1';
        }
        if (userPassword.at(i) == 'a') {
            userPassword.at(i) ='@';
        }
        if (userPassword.at(i)== 'm') {
            userPassword[i] = toupper(userPassword[i]);
        }
        if (userPassword.at(i) == 'B') {
            userPassword.at(i) = '8';
        }
        if (userPassword.at(i) == 's') {
            userPassword.at(i) = '$';
        }
    }
    userPassword.push_back('!');
    std::cout << userPassword;

    return 0;
}