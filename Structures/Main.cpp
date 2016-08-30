


struct vec2 { float x, y; };
bool isEqual(vec2 a, vec2 b)
{
	
	a.x == b.x && a.y == b.y;

}


struct Player
{
	/*
	struct Whoa
	{



	};
	*/

	float x, y;
	float health;
	int ID;
	char name[64];
	float attackPower;
	float coolDown;
	int inventory[8];

};






void main()
{
	/*
	Player myPlayer;
	myPlayer.health = 4;
	*/

	Player player;
	Player players[5];

	player.x = 4;
	int stuff[8] = { 0,0,0,0,0,0,0,0 };
	Player sally = { 0,0,{0,0,0,0,0,0,0,0} };


	sally = { 0,0,{0,0,0,0,0,0,0,0} };

	if(isEqual(sally.position))

};



/*

	struct Player
	{
		char name[64]
	
	
	};



	void main()
	{
		char name[64] = "Milly";
		char onam[64] = {'M', 'i', 'l', 'y', 0};



		Player p = {"Sally"};

		p = {"Samuel", {4,5,5,6,4,5}};

		
	
	}



*/