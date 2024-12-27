#pragma once

#include <string>
#include "SDFValues.h"

namespace SDF {

class SDFAssignment {
public:
    SDFAssignment(std::string name);
    ~SDFAssignment();
private:
    std::string name;
    SDFValue value; 
};

}

// Which is best
// SDF::SDFAssignment
// SDFAssignment
// SDF::Assignment