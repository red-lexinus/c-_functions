#include "string_functions.h"

bool check_in(string txt_1, string txt_2) {
    string txt = "";
    int pos = 0;
    for (auto chr: txt_1) {
        if (txt == txt_2) return true;
        else if (chr == txt_2[pos]) {
            pos++;
            txt = txt + chr;
        } else {
            pos = 0;
            txt = "";
        }
    }
    if (txt == txt_2) return true;
    return false;
}

void split(vector<string> &arr, string line, char space = ' ') {
    arr = {};
    string txt = "";
    for (auto chr: line) {
        if (chr != space) txt = txt + chr;
        else if (txt != "" and chr == space) {
            arr.push_back(txt);
            txt = "";
        }
    }
    if (txt != "") arr.push_back(txt);
}