#pragma once
#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm>
using namespace std;

const size_t SCREEN_WIDTH = 80;
const size_t MAX_ASTERISK = SCREEN_WIDTH - 3 - 1;

void svg_begin(double width, double height);

void svg_end();

void svg_text(double left, double baseline, string text);

void svg_rect(double x, double y, double width, double height, string stroke, string fill);

double scale(vector <size_t> bins);

void show_histogram_svg(vector<size_t>& bins);