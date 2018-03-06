/*
 *	Copyright 2018	Owen Pan	All rights reserved.
 */

#ifndef LIGHTS_OUT_SOLVER_H
#define LIGHTS_OUT_SOLVER_H

#include <vector>

// use char below to avoid vector<bool> specialization
typedef std::vector<char> ColumnVector;

class LightsOutSolver
{
public:
	LightsOutSolver(int dimension);	// 3 <= dimension <= 8
	~LightsOutSolver();

	// Compute the number of moves required to solve the puzzle
	// Return: number of moves required if the puzzle is solvable; -1 otherwise
	int MovesRequired(const ColumnVector& puzzle);

	// Give a hint about which light button to press next
	// Return: 1-based button number if the puzzle is solvable; -1 otherwise
	int Hint(const ColumnVector& puzzle);
};

#endif
