#include "Comparator.h"

bool LessThanByPriority::operator()(const Patient &lhs, const Patient &rhs) {
return (lhs.getPriority() > rhs.getPriority());
}

bool SortByDoctor::operator()(const Patient &lhs, const Patient &rhs) {
    return (lhs.getDoctor() > rhs.getDoctor());
}