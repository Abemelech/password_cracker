#include "rainbow.h"
#include <openssl/md5.h>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

string toMD5(const string& input) {
    // create the storage for the hashed string
    unsigned char digest[MD5_DIGEST_LENGTH];

    // apply MD5 to the input
    MD5((unsigned char*)input.c_str(), input.length(), (unsigned char*)&digest);

    // Own (Searched) Implementation

    ostringstream result;

    for (size_t i = 0; i < sizeof(digest) / sizeof(digest[0]); i++) {
        result << hex << setw(2) << setfill('0') << (int)digest[i];
    }
    
    return result.str();

    // Suggested example
    // stringstream ss;
    // for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
    //     ss << hex << setw(2) << setfill('0') << (int)digest[i];
    // }
    // return ss.str();
}

