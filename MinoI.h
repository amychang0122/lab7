#ifndef MINO_I_H
#define MINO_I_H
#include <iostream>
#include "Mino.h"
using namespace std;
class MinoI:public Mino //繼承自Mino
{
	public:
		MinoI();
		virtual void paint();
};
#endif
