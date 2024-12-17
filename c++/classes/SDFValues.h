#pragma once

#include <string>
#include <vector>

class SDFValue {

};

class SDFSpacial : public SDFValue {
public:
private:
    std::string name;
    std::vector<SDFValue> values;
};

class SDFBlock : public SDFValue {
public:
private:
};