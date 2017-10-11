#pragma once

#include <memory>
#include "MazeData.h"


class MazeSolver;

class MazeRunner
{	
	std::unique_ptr<MazeSolver>  m_pMazeSolver;
	Status m_Status;
	RunMode m_RunMode;
	Position m_Position;

	void runMicroMouseDriver();
public:
	MazeRunner();
	void runAll();
};
