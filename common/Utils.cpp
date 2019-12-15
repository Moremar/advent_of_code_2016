#include <iostream>
#include <fstream>
#include <sstream>    // ostringstream

#include "Utils.hpp"
#include "AdventException.hpp"

using namespace std;


std::string operator +(const std::string &s, const char &c) {
    std::ostringstream ss;
    ss << s << c;
    return ss.str();
}

std::string operator +(const std::string &s, const string &s2) {
    std::ostringstream ss;
    ss << s << s2;
    return ss.str();
}

vector<string> split(const string &s, const string &delim) {
    vector<string> res;
    string rest = s;
    int pos = (int) rest.find(delim);
    while (pos > 0) {
        res.push_back(rest.substr(0, pos));
        rest = rest.substr(pos + delim.size());
        pos = (int) rest.find(delim);
    }
    res.push_back(rest.substr(0, pos));  // last part of the string
    return res;
}

vector<string> getFileLines(const string &fileName) {
    vector<string> res;
    ifstream f(fileName);
    if (f) {
        string line;
        while (getline(f, line)) {
            if (line.size() > 0)
                res.push_back(line);
        }
        f.close();
    } else {
        throw AdventException("Unable to open file " + fileName);
    }
    return res;
}

pair<int, int> operator +(const pair<int, int> &x, const pair<int, int> &y) {
    return make_pair(x.first + y.first, x.second + y.second);
}

pair<int, int> operator *(const pair<int, int> &x, int i) {
    return make_pair(x.first * i, x.second * i);
}
