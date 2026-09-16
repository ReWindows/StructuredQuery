#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 7 member(s).
namespace SemanticsUM {
class EntityIndicator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginActualToken@EntityIndicator@SemanticsUM@@UEBAHXZ
    virtual int BeginActualToken() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@EntityIndicator@SemanticsUM@@SAJHHPEBVEntity@2@PEAPEAV12@@Z
    static long Create(int, int, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndActualToken@EntityIndicator@SemanticsUM@@UEBAHXZ
    virtual int EndActualToken() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEntity@EntityIndicator@SemanticsUM@@UEBAPEBVIEntity@2@XZ
    virtual WindissectOpaque const * GetEntity() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextSibling@EntityIndicator@SemanticsUM@@UEBAPEAVIEntityIndicator@2@XZ
    virtual WindissectOpaque * NextSibling() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EntityIndicator@SemanticsUM@@QEAA@XZ
    ~EntityIndicator();
};
} // namespace SemanticsUM
