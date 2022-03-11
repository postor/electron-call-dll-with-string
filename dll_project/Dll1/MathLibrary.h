#pragma once
#include <string>
using std::string;
// MathLibrary.h - Contains declarations of math functions
#pragma once

#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATHLIBRARY_API __declspec(dllimport)
#endif


extern "C" MATHLIBRARY_API INT add(
    const INT a, const INT b);


extern "C" MATHLIBRARY_API const char * concat(
    const char* a, const char* b);