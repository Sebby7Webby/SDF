#pragma once

#include <vector>
#include <string>
#include "SDFAssignment.h"

namespace SDF {

class SDFSpacial {
public:
    SDFSpacial();
    ~SDFSpacial();
private:
    std::string name;
    std::vector<SDFAssignment> assignments;
};

}