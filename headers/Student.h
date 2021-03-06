#ifndef Student_h
#define Student_h
#include "Customer.h"

class Student: public Customer {
    virtual double getSavingsInterest();
    virtual double getCheckInterest();
    virtual int getCheckCharge();
    virtual int getOverdraftPenalty();
};
#endif