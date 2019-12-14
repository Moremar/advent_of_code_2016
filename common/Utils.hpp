#ifndef Utils_hpp
#define Utils_hpp

#include <stdio.h>
#include <string>
#include <vector>


/**
 * Split a string on a delimiter
 */
std::vector<std::string> split(const std::string &s, const std::string &delim);

/**
 * Get a vector of all not-empty lines of a file
 */
std::vector<std::string> getFileLines(const std::string &fileName);


#endif /* Utils_hpp */
