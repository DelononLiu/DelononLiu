/*
Nano Infra library for Modern C++ Application
version 0.0.1
https://github.com/nlohmann/json

 File: argparser.h
 Module: ArgParser

 Feature configuration for the POCO libraries.

Licensed under the MIT License <http://opensource.org/licenses/MIT>.
SPDX-License-Identifier: MIT
Copyright (c) 2020-2020 Delonon Liu <DelononLiu@gmail.com>.
*/

#ifndef NANOINFRA_ARGPARSER_HPP
#define NANOINFRA_ARGPARSER_HPP

#include <string>


namespace Nano {
namespace Infra {

class ArgParserImpl;

class ArgParser
{
public:
    ArgParser();

    template<typename T>
    T get(const std::string& name);

    template<typename T>
    T get(const char* name)
    {
        return T();
    }

private:
    ArgParserImpl* pImpl;
};

} // Infra
} // Nano
#endif //NANOINFRA_ARGPARSER_HPP
