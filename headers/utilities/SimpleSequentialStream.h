#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 4 member(s).
namespace SemanticsUM {
class SimpleSequentialStream {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@SimpleSequentialStream@SemanticsUM@@UEAAJPEAXKPEAK@Z
    virtual long Read(void *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@SimpleSequentialStream@SemanticsUM@@UEAAJPEBXKPEAK@Z
    virtual long Write(void const *, unsigned long, unsigned long *);
};
} // namespace SemanticsUM
