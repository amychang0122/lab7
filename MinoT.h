#ifndef MINO_T_H
#define MINO_T_H
#include <iostream>
#include "Mino.h"
using namespace std;
class MinoT:public Mino 	//繼承自Mino
{
	public:
		MinoT();
		virtual void paint();
};
#endif
