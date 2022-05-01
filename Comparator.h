#ifndef COMPARATOR_H
#define COMPARATOR_H
#include "Patient.h"

class LessThanByPriority{
public:
    bool operator() (const Patient& lhs, const Patient& rhs) {
        return (lhs.getPriority() < rhs.getPriority());
    }
};
#endif //COMPARATOR_H
