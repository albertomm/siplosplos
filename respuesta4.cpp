#include <cstdio>

int main() {
	
	// Color channels
	unsigned char a = 0xAA;
	unsigned char r = 0xBB;
	unsigned char g = 0xCC;
	unsigned char b = 0xDD;
	printf("a = %u (0x%x)\n", a, a);
	printf("r = %u (0x%x)\n", r, r);
	printf("g = %u (0x%x)\n", g, g);
	printf("b = %u (0x%x)\n", b, b);

	// Assemble the ARGB value
	unsigned int argb = a<<24 | r<<16 | g<<8 | b;
	printf("ARGB = %u (0x%x)\n", argb, argb);

	// Use a char pointer to get to the color channels
	unsigned char* channel = (unsigned char*) &argb;

	for (int i = 0; i<4; i++)
	{
		// color[i] is also valid but pointer arithmetics is cooler
		printf("channel %d = %d (0x%x)\n", i, *channel, *channel);
		channel++;
	}

	// Find green directly
	unsigned char green = ((unsigned char*) &argb)[1]; // Shouldn't it be [2]?
	printf("green = %u (0x%x)\n", green, green);

	return 0;
}
