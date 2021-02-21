#ifndef Utils_hpp
#define Utils_hpp

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::pair;

/**
 * Concatenate a string and a char
 */
string operator +(const string &s, const char &c);

/**
 * Concatenate two strings
 */
string operator +(const string &s, const string &s2);

/**
 * Trim a string
 */
string trim(const string& str, const string& chars = "\t\n\v\f\r ");

/**
 * Split a string on a delimiter
 */
vector<string> split(const string &s, const string &delim);

/**
 * Get a vector of all not-empty lines of a file
 */
vector<string> getFileLines(const string &fileName);

/**
 * Term by term sum of 2 pairs of int
 */
pair<int, int> operator +(const pair<int, int> &x, const pair<int, int> &y);

/**
 * multiply both terms of a pair by an int
 */
pair<int, int> operator *(const pair<int, int> &x, int i);


/**
 * Check if an element is included in a vector
 */
template<class T, class U>
bool in(vector<T> v, T e) {
    return find(v.begin(), v.end(), e) == v.end();
}


#endif /* Utils_hpp */
