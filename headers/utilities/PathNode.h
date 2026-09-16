#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 5 member(s).
namespace SemanticsUM {
class PathNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixUpTopNodeAndLevel@PathNode@SemanticsUM@@QEAAJKK@Z
    long FixUpTopNodeAndLevel(unsigned long, unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PathNode@SemanticsUM@@QEAA@XZ
    PathNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@PathNode@SemanticsUM@@QEBAJPEAUISequentialStream@@AEBV?$OffsetCalculator@_W@2@AEBV?$OffsetCalculator@VPathNode@SemanticsUM@@@2@PEBVSchemaBinary@2@@Z
    long Save(ISequentialStream *, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PathNode@SemanticsUM@@QEAA@XZ
    ~PathNode();
};
} // namespace SemanticsUM
