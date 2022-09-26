#pragma once
#include <iostream>


struct pairs {
	int* vals;
	char* chars;
	
	int size;
	pairs(std::initializer_list<int> vals, std::initializer_list<char> chars) {
		if (vals.size() != chars.size()) {
			fputs("brace enclosed lists are not equal", stderr);
			exit(1);
		}//store size
		size = vals.size();

		this->vals = new int[vals.size()];
		this->chars = new char[chars.size()];
		//iterate through vals/chars and push the values to them 
		int temp = 0;
		for (auto iter : vals) {
			this->vals[temp] = iter;
			temp++;
		}
		temp = 0;
		for (auto iter : chars) {
			this->chars[temp] = iter;
			temp++;
		}

		
	}


};

