#ifndef MINO_Z_H
#define MINO_Z_H
#include <iostream>
#include "Mino.h"
using namespace std;
class MinoZ:public Mino 	//繼承自Mino
{
	public:
		MinoZ();
		virtual void paint();
};
#endif
