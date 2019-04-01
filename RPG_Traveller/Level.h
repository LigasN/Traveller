#pragma once


class Level {
private:
	int level;
public:
	Level();
	~Level();

	void setLevel(int level);
	void increaseLEvel();
	int getLevel();
};

