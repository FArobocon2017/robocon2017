#include <iostream>
#include <algorithm>
#include "MazeRunner.h"
#include "MazeSolver.h"

MazeRunner::MazeRunner()
{}

// 走行タスク
// 迷路解析 - ロボット制御のフローを実施する
void MazeRunner::runMicroMouseDriver()
{
	while (m_Status == Run) // 停止指令またはゴール到着まで動き続ける
	{
		auto progress = m_pMazeSolver->update(m_Position, m_RunMode);

		if (progress.isGoal)
		{
			// 最短経路組み立て
			m_pMazeSolver->calcOptimalRoute();
			m_Mode = Solving;
			break;
		}

		motorInput = m_pMazeSolver->calcNextPosition(progress.currentPos, m_Mode);

		motorOutput = m_pMicroMouseDriver->drive(motorInput);
	}
	std::cout << "end tasks." << std::endl;
}

void MazeRunner::runAll()
{
	// 走行タスク
	runMicroMouseDriver();
}