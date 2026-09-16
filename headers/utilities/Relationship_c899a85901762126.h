#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 8 member(s).
namespace SemanticsUM {
class Relationship {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDestination@Relationship@SemanticsUM@@UEBAPEBVIEntity@2@XZ
    virtual WindissectOpaque const * GetDestination() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMetaData@Relationship@SemanticsUM@@UEBAPEBVIMetaData@2@K@Z
    virtual WindissectOpaque const * GetMetaData(unsigned long) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Name@Relationship@SemanticsUM@@UEBAPEB_WXZ
    virtual wchar_t const * Name() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NumberOfMetaData@Relationship@SemanticsUM@@UEBAKXZ
    virtual unsigned long NumberOfMetaData() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreferredPhrase@Relationship@SemanticsUM@@UEBAPEB_WXZ
    virtual wchar_t const * PreferredPhrase() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Relationship@SemanticsUM@@QEAA@XZ
    Relationship();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Relationship@SemanticsUM@@UEAA@XZ
    virtual ~Relationship();
};
} // namespace SemanticsUM
