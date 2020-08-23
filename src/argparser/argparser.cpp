/*
Nano Infra library for Modern C++ Application
version 0.0.1
https://github.com/DelononLiu/NanoInfra

 File: argparser.cpp
 Module:  ArgParser

 Feature configuration for the POCO libraries.

Licensed under the MIT License <http://opensource.org/licenses/MIT>.
SPDX-License-Identifier: MIT
Copyright (c) 2020-2020 Delonon Liu <DelononLiu@gmail.com>.
*/

#include "argparser/argparser.hpp"

namespace Nano {
namespace Infra {

class ArgParserImpl
{
    template<typename T>
    T get(const std::string& name)
    {
        return "";
    }
};

ArgParser::ArgParser()
{
    pImpl = new ArgParserImpl();
}

template<typename T>
T ArgParser::get(const std::string &name)
{
    return pImpl->get<T>(name);
}

//template<typename T>
//T ArgParser::get(const char *name)
//{
//    return get<T>(std::string(name));
//}

}
}