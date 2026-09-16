#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 10 member(s).
namespace SemanticsUM {
class SemSolution {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanBeCombinedWith@SemSolution@SemanticsUM@@QEAA_NPEBVFragment@2@_N@Z
    bool CanBeCombinedWith(WindissectOpaque const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLatestBackboneSolution@SemSolution@SemanticsUM@@QEBAPEBV12@_N@Z
    WindissectOpaque const * GetLatestBackboneSolution(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousWithPathNode@SemSolution@SemanticsUM@@QEAAPEBV12@XZ
    WindissectOpaque const * GetPreviousWithPathNode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@SemSolution@SemanticsUM@@QEAA_N_N0@Z
    bool IsValid(bool, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTreeHash@SemSolution@SemanticsUM@@AEAAHHHHHPEBVPathNode@2@@Z
    int ComputeTreeHash(int, int, int, int, WindissectOpaque const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommonLevel@SemSolution@SemanticsUM@@AEAAHPEBVPathNode@2@0_N@Z
    int GetCommonLevel(WindissectOpaque const *, WindissectOpaque const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSamePath@SemSolution@SemanticsUM@@AEAA_NPEBVPathNode@2@0@Z
    bool HasSamePath(WindissectOpaque const *, WindissectOpaque const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSimilarPaths@SemSolution@SemanticsUM@@AEAA_NPEBVPathNode@2@0_N@Z
    bool HasSimilarPaths(WindissectOpaque const *, WindissectOpaque const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HeuristicScore@SemSolution@SemanticsUM@@AEAAN_N@Z
    double HeuristicScore(bool);
};
} // namespace SemanticsUM
