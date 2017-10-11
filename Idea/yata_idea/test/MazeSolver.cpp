#include "MazeSolver.h"
#include "MazeData.h"

MazeSolver::MazeSolver()
{}

// 学習プロセス
MazeSolver::calcNextPosForLearning(const Position myPos)
{
	// 1. update wall

	// 2. get next direction

	// 3, set Motor input

	// 現状は仮実装
	MotorInputParam param;
	param.time = 1;
	return param;
}

MazeProgress MazeSolver::update(const Position myPos, RunMode mode)
{

	// RunMode = 探索走行モード
	if (mode == Learning)
	{
		//センサから取得した壁情報を入れる
		Direction wallData = getWallData();
		//マウスの座標（ブロック単位）を取得
		IndexVec MousePos = getMousePosion();
		//壁情報を更新 次に進むべき方向を計算
		agent.update(robotPos, wallData);
	}
	// RunMode = 最速走行モード
	else if (m_RunMode == Solving)
	{

	}

	// 最適経路プロセス
	if (mode == Solving) return calcNextPosForSolving(myPos);
	// 学習プロセス
	return calcNextPosForLearning(myPos);
}