#include <iostream>
#include <algorithm>
#include "MazeRunner.h"
#include "MazeSolver.h"

MazeRunner::MazeRunner()
{}

// ���s�^�X�N
// ���H��� - ���{�b�g����̃t���[�����{����
void MazeRunner::runMicroMouseDriver()
{
	while (m_Status == Run) // ��~�w�߂܂��̓S�[�������܂œ���������
	{
		auto progress = m_pMazeSolver->update(m_Position, m_RunMode);

		if (progress.isGoal)
		{
			// �ŒZ�o�H�g�ݗ���
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
	// ���s�^�X�N
	runMicroMouseDriver();
}