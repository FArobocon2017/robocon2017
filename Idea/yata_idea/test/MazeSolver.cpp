#include "MazeSolver.h"
#include "MazeData.h"

MazeSolver::MazeSolver()
{}

// �w�K�v���Z�X
MazeSolver::calcNextPosForLearning(const Position myPos)
{
	// 1. update wall

	// 2. get next direction

	// 3, set Motor input

	// ����͉�����
	MotorInputParam param;
	param.time = 1;
	return param;
}

MazeProgress MazeSolver::update(const Position myPos, RunMode mode)
{

	// RunMode = �T�����s���[�h
	if (mode == Learning)
	{
		//�Z���T����擾�����Ǐ�������
		Direction wallData = getWallData();
		//�}�E�X�̍��W�i�u���b�N�P�ʁj���擾
		IndexVec MousePos = getMousePosion();
		//�Ǐ����X�V ���ɐi�ނׂ��������v�Z
		agent.update(robotPos, wallData);
	}
	// RunMode = �ő����s���[�h
	else if (m_RunMode == Solving)
	{

	}

	// �œK�o�H�v���Z�X
	if (mode == Solving) return calcNextPosForSolving(myPos);
	// �w�K�v���Z�X
	return calcNextPosForLearning(myPos);
}