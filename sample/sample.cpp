/*
Nano Infra library for Modern C++ Application
version 0.0.1
https://github.com/DelononLiu/NanoInfra

 File: sample.cpp
 Module:  Sample

 Feature configuration for the POCO libraries.

Licensed under the MIT License <http://opensource.org/licenses/MIT>.
SPDX-License-Identifier: MIT
Copyright (c) 2020-2020 Delonon Liu <DelononLiu@gmail.com>.
*/

#include "argparser/argparser.hpp"

using Nano::Infra::ArgParser;

int main()
{
    ArgParser argparser;
    argparser.get<int>("name");
}
