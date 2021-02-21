#pragma once

#include "Utils.hpp"


struct Room {
    string encryptedName;
    int sectorId;
    string checksum;

    Room(const string &encryptedName, int sectorId, const string &checksum):
        encryptedName(encryptedName), sectorId(sectorId), checksum(checksum) {}
    
    bool isReal() const;
};


namespace Part1 {
    vector<Room> parse(const string &filePath);
    int solve(vector<Room> data);
}