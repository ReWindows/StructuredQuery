#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 4 member(s).
namespace SemanticsUM {
class Keyword {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Keyword@SemanticsUM@@QEAA@XZ
    Keyword();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@Keyword@SemanticsUM@@QEAAJPEAUISequentialStream@@PEBVSchemaBinary@2@@Z
    long Load(ISequentialStream *, WindissectOpaque const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Keyword@SemanticsUM@@QEAA@XZ
    ~Keyword();
};
} // namespace SemanticsUM
