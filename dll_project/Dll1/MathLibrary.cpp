// MathLibrary.cpp : Defines the exported functions for the DLL.
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <utility>
#include <limits.h>
#include "MathLibrary.h"
#include <iostream>
using namespace std;

// Initialize a Fibonacci relation sequence
// such that F(0) = a, F(1) = b.
// This function must be called before any other function.
INT add(
    const INT a,
    const INT b)
{
    return a + b;
}

const char* concat(
    const char* a, const char* b) {
    cout << a << "|";
    cout << b << "|";
    
    const string str = string(a) + string(b);

    char* cstr = new char[str.length() + 1];
    strcpy_s(cstr,str.length()+1,str.c_str());
    //strncpy_s(cstr, str.c_str(), str.length());
    //const char* cstr = str.data();
    //cout << cstr << "|";
    //return str.c_str();
    //const char* cstr = const_cast<char*>(str.c_str());
    cout << cstr << "|";
    return cstr;
}