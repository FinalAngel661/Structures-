#include <iostream>


//point(xfloat, yfloat);


struct Player
{
	char name[80];
	float health = 4;
	float score = 0;
	float position = 0;
	
};



void main()
{
	Player myPlayer;
	myPlayer.health = 4;

	char string[80];
	scanf_s("%s", string);
	getchar();

	printf("%s", string);
	getchar();


}