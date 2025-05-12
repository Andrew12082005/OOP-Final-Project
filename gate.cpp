#include"gate.h"

Gate::Gate(const string& out, const vector<string>& in):output(out),input(in){};
Gate::~Gate(){};
string Gate::outwire() const{
    return output;
};
vector<string> Gate::inwire() const{
    return input;
};

