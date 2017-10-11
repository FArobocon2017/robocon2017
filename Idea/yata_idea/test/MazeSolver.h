#pragma once

#include "MazeData.h"
#include "Agent.h"
#include "mazeSimData.h"
#include "MazeRunner.h"
#include <vector>

class MazeSolver
{
	//探索した迷路の壁情報がはいる
	Maze maze;
	//クラッシュした時のためのバックアップ
	Maze maze_backup;

	//探索の指示を出す
	Agent agent(maze);
	//前回のAgentの状態を保存しとく
	Agent::State prevState = Agent::IDLE;

public:
	MazeSolver();
	MazeProgress update(Position, RunMode);
};