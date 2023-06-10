# ifndef RANDOM_H_GUESSING_NUMBER
#define RANDOM_H_GUESSING_NUMBER

#include <random>
#include "constants.h"

namespace randnum
{
    inline std::mt19937 makeSeeds(){

        std::random_device randomd{};
        std::seed_seq seedq{randomd(), randomd(), randomd(), randomd(), randomd(),
                            randomd(), randomd(), randomd(), randomd()};
        std::mt19937 mt{seedq};
        return mt;

    }

    inline std::mt19937 mt{makeSeeds()};

    inline int generateRandomNumber(){
        std::uniform_int_distribution uid{cons::MinNumber, cons::MaxNumber};
        return uid(mt);
    }


};//randnum


#endif