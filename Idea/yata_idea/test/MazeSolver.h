#pragma once

#include "MazeData.h"
#include "Agent.h"
#include "mazeSimData.h"
#include "MazeRunner.h"
#include <vector>

class MazeSolver
{
	//�T���������H�̕Ǐ�񂪂͂���
	Maze maze;
	//�N���b�V���������̂��߂̃o�b�N�A�b�v
	Maze maze_backup;

	//�T���̎w�����o��
	Agent agent(maze);
	//�O���Agent�̏�Ԃ�ۑ����Ƃ�
	Agent::State prevState = Agent::IDLE;

public:
	MazeSolver();
	MazeProgress update(Position, RunMode);
};