#pragma once
#include <vector>
#include "Meteor.h"

class DataColector
{
public:
    DataColector( std::vector<Meteor>& toStoreInto );
    DataColector( std::vector<Meteor>& CAMS, 
                std::vector<Meteor>& GMU, 
                std::vector<Meteor>& EDMOND,
                std::vector<Meteor>& SonotaCo );
public:

private:

};