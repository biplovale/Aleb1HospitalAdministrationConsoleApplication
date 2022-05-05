#ifndef COMPARATOR_H
#define COMPARATOR_H

#include "Patient.h"
#include <string.h>

class LessThanByPriority{
public:
    bool operator() (const Patient& lhs, const Patient& rhs);
};

class SortByDoctor{
public:
    bool operator() (const Patient& lhs, const Patient& rhs);
};
#endif //COMPARATOR_H
