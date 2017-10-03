#pragma once

#include "Maze.h"
#include "Agent.h"
#include "mazeData.h"
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
	Agent::State prevState = IDLE;

public:
	MazeSolver();
	SolverOutputParam update(Position, RunMode);
};