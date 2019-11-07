#pragma once

#define JUNK() UsefulFuntion(rand(), rand(), rand(), rand());

inline int UsefulFuntion(int x, int y, int z, int r)
{
	for (int i = 0; i < 4; i++)
	{
		x++;
		y--;
		z += 20;
		r -= 40;
	}
	for (int i = 0; i < 5; i++)
	{
		x++;
		y += 32;
		z -= 20;
		r += 40;
	}
	return x + y + z + r;
}