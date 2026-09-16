#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 4 member(s).
namespace SemanticsUM {
class FragmentTemplate {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FragmentTemplate@SemanticsUM@@QEAA@XZ
    FragmentTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@FragmentTemplate@SemanticsUM@@QEBAJPEAUISequentialStream@@AEBV?$OffsetCalculator@_W@2@AEBV?$OffsetCalculator@VRelationship@SemanticsUM@@@2@PEBVSchemaBinary@2@@Z
    long Save(ISequentialStream *, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FragmentTemplate@SemanticsUM@@QEAA@XZ
    ~FragmentTemplate();
};
} // namespace SemanticsUM
