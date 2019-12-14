#ifndef AdventException_hpp
#define AdventException_hpp
#include <stdio.h>
#include <string>
#include <stdexcept>


class AdventException : public std::exception {
public:
    AdventException(const std::string& msg) : m_msg(msg) {}

   virtual const char* what() const throw () {
        return m_msg.c_str();
   }
private:
   const std::string m_msg;
};

#endif /* AdventException_hpp */
