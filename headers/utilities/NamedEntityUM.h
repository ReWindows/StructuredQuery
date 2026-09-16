#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 12 member(s).
namespace SemanticsUM {
class NamedEntityUM {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginActual@NamedEntityUM@SemanticsUM@@UEBAKXZ
    virtual unsigned long BeginActual() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginSpan@NamedEntityUM@SemanticsUM@@UEBAKXZ
    virtual unsigned long BeginSpan() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Certainty@NamedEntityUM@SemanticsUM@@UEBA?AW4NamedEntityCertainty@2@XZ
    virtual int Certainty() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndActual@NamedEntityUM@SemanticsUM@@UEBAKXZ
    virtual unsigned long EndActual() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndSpan@NamedEntityUM@SemanticsUM@@UEBAKXZ
    virtual unsigned long EndSpan() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Entity@NamedEntityUM@SemanticsUM@@UEBAPEBVIEntity@2@XZ
    virtual WindissectOpaque const * Entity() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@NamedEntityUM@SemanticsUM@@UEAAAEAPEAVINamedEntity@2@XZ
    virtual WindissectOpaque * & Next();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Text@NamedEntityUM@SemanticsUM@@UEBAPEB_WXZ
    virtual wchar_t const * Text() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NamedEntityUM@SemanticsUM@@UEAA@XZ
    virtual ~NamedEntityUM();
};
} // namespace SemanticsUM
