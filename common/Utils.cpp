#include <iostream>
#include <fstream>
#include "Utils.hpp"
#include "AdventException.hpp"

using namespace std;


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
