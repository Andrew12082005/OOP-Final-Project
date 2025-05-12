#ifndef GATE_H
#define GATE_H
#include<iostream>
#include<vector>

using namespace std;

class Gate {
    private:
        string output;
        vector<string> input;
    public:
        Gate(const string& out, const vector<string>& in);
        ~Gate();
        string outwire() const;
        vector<string> inwire() const;
};

#endif