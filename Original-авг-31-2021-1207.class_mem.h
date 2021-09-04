#pragma once
#include "stdafx.h"
#include <iostream>
#include "string"
#include "stdio.h"
#include "conio.h"
#include "struct_file.h"
#include "Header_func.h"

using namespace std;

typedef class headset {
public:
	string type;
	const int sizeType = 10;
	int *numberSpeakerOfType = new int[sizeType], CapacChainCircut; //размер массива - количество вариантов. В каждую ячейку массива записывается количество динамиков для этого варианта

	enum num_Connect{iPhopne = 1, iPad, xiaomi, samsung, nokia, acer, asus, alcatel, otherPhone};
	num_Connect identifAccum(int capacity) { //тоже бесполезная функция чисто, чтобы была и чисто, чтобы можно было протестить.
		switch (capacity){
		case 3: return iPhopne; break;
		case 5: return iPad; break;
		case 4: return xiaomi; break;
		case 6: return samsung; break;
		case 8: return nokia; break;
		case 10: return acer; break;
		case 7: return alcatel; break;
		case 9: return asus; break;
		default: return otherPhone; break;
		}

	} 

	void (*choiceMethodforPhone(double yui, string grade_quality, void(*variable)(double volum, string *quantity)))(double, string *) {
		if ( grade_quality == "light") {
			if (yui == 1) { return method1; }
			else if (yui == 2) { return method2; }
			else { return variable; }

		}
		if (grade_quality == "medium") {
			if (yui == 1) { return variable; }
		    else if(yui == 2) { return method3; }
			else  { return method1; }
		}
		else {
			if (yui == 1) { return method3; }
			else if (yui == 2) { return variable; }
			else  { return method2; }
		}
	}

	void programRegisterFuncAudset(int *volume, string operation, int mask) {
		
		if (operation == "&") { *volume &= mask; }
		if (operation == "|") { *volume |= mask; }
		if (operation == "^") { *volume ^= mask; }
		if (operation == ">>") { *volume >>= mask; }
		if (operation == "<<") { *volume <<= mask; }
		int regist = *volume;
	}

	
} headphone;

class furniture {
public:
	string type; 

	furniture(string inputTypeFurniture){
		type = inputTypeFurniture;
	}
};
