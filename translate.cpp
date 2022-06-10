// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created in May 2022
// This is a math program, translating a string to hex

#include <iostream>
#include <string>
#include <list>
#include <map>

std::list<std::string> Translate(std::string inputString) {
    // This function translates the string
    std::list<std::string> answerList;
    std::map<std::string, std::string> dictionary = {
        {" ", "0x20"},
        {"!", "0x21"},
        // Can't Add in 22 since it is a Quotation Mark (")
        {"#", "0x23"},
        {"$", "0x24"},
        {"%", "0x25"},
        {"&", "0x26"},
        {"'", "0x27"},
        {"(", "0x28"},
        {")", "0x29"},
        {"*", "0x2a"},
        {"+", "0x2b"},
        {",", "0x2c"},
        {"-", "0x2d"},
        {".", "0x2e"},
        {"/", "0x2f"},
        {"0", "0x30"},
        {"1", "0x31"},
        {"2", "0x32"},
        {"3", "0x33"},
        {"4", "0x34"},
        {"5", "0x35"},
        {"6", "0x36"},
        {"7", "0x37"},
        {"8", "0x38"},
        {"9", "0x39"},
        {":", "0x3a"},
        {";", "0x3b"},
        {"<", "0x3c"},
        {"=", "0x3d"},
        {">", "0x3e"},
        {"?", "0x3f"},
        {"@", "0x40"},
        {"A", "0x41"},
        {"B", "0x42"},
        {"C", "0x43"},
        {"D", "0x44"},
        {"E", "0x45"},
        {"F", "0x46"},
        {"G", "0x47"},
        {"H", "0x48"},
        {"I", "0x49"},
        {"J", "0x4a"},
        {"K", "0x4b"},
        {"L", "0x4c"},
        {"M", "0x4d"},
        {"N", "0x4e"},
        {"O", "0x4f"},
        {"P", "0x50"},
        {"Q", "0x51"},
        {"R", "0x52"},
        {"S", "0x53"},
        {"T", "0x54"},
        {"U", "0x55"},
        {"V", "0x56"},
        {"W", "0x57"},
        {"X", "0x58"},
        {"Y", "0x59"},
        {"Z", "0x5a"},
        {"[", "0x5b"},
        // Can't Add in 5c since it is a Backslash (\)
        {"]", "0x5d"},
        {"^", "0x5e"},
        {"_", "0x5f"},
        {"`", "0x60"},
        {"a", "0x61"},
        {"b", "0x62"},
        {"c", "0x63"},
        {"d", "0x64"},
        {"e", "0x65"},
        {"f", "0x66"},
        {"g", "0x67"},
        {"h", "0x68"},
        {"i", "0x69"},
        {"j", "0x6a"},
        {"k", "0x6b"},
        {"l", "0x6c"},
        {"m", "0x6d"},
        {"n", "0x6e"},
        {"o", "0x6f"},
        {"p", "0x70"},
        {"q", "0x71"},
        {"r", "0x72"},
        {"s", "0x73"},
        {"t", "0x74"},
        {"u", "0x75"},
        {"v", "0x76"},
        {"w", "0x77"},
        {"x", "0x78"},
        {"y", "0x79"},
        {"z", "0x7a"},
        {"{", "0x7b"},
        {"|", "0x7c"},
        {"}", "0x7d"},
        {"~", "0x7e"},
    };

    // process & output
    std::string answer;
    for (int loopCounter = 0; loopCounter < inputString.length(); loopCounter++) {
        if (dictionary.count(inputString[loopCounter]) > 0) {
            answer = dictionary[inputString[loopCounter]];
            answerList.push_back(answer);
        } else {
            answer = -1;
            answerList.push_back(answer);
        }
    }
    return answerList;
}


int main() {
    // This function does try and catch
    std::string inputString;
    std::string inputFirst;
    std::list<std::string> outputString;

    // input
    std::cout << "Please enter in a string to be translated into hex: ";
    std::cin >> inputFirst;

    // process
    std::cout << "" << std::endl;
    try {
        inputString = std::to_string(inputString);
        // call functions
        outputString = Translate(inputString);
        std::cout << inputString << " in hex is " << outputString << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid number!" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
