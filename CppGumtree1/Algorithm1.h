#pragma once
#include "Tree.h"
#include "HIPList.h"

namespace Util
{
	static int min(int A, int B);
}

class Algorithm1
{
public:
	void compute(Tree* srcTree, Tree* dstTree, int minHeight, HIPList& L1, HIPList& L2, 
		std::vector<std::pair<Tree*, Tree*>>& candidateMappings, std::vector<std::pair<Tree*, Tree*>>& resultMappings);
};

int Util::min(int A, int B)
{
	if (A < B)
		return A;
	else
		return B;
}