#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 6 member(s).
namespace SemanticsUM {
class MetaData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Key@MetaData@SemanticsUM@@UEBAPEB_WXZ
    virtual wchar_t const * Key() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MetaData@SemanticsUM@@QEAA@XZ
    MetaData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@MetaData@SemanticsUM@@QEBAJPEAUISequentialStream@@AEBV?$OffsetCalculator@_W@2@@Z
    long Save(ISequentialStream *, WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Value@MetaData@SemanticsUM@@UEBAPEB_WXZ
    virtual wchar_t const * Value() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MetaData@SemanticsUM@@UEAA@XZ
    virtual ~MetaData();
};
} // namespace SemanticsUM
