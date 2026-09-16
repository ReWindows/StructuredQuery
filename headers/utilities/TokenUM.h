#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 9 member(s).
namespace SemanticsUM {
class TokenUM {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Begin@TokenUM@SemanticsUM@@UEBAKXZ
    virtual unsigned long Begin() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Class@TokenUM@SemanticsUM@@UEBA?AW4CHARACTER_EQUIVALENCE_CLASS@2@XZ
    virtual int Class() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?End@TokenUM@SemanticsUM@@UEBAKXZ
    virtual unsigned long End() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Length@TokenUM@SemanticsUM@@UEBAKXZ
    virtual unsigned long Length() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Text@TokenUM@SemanticsUM@@UEBAPEB_WXZ
    virtual wchar_t const * Text() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TokenUM@SemanticsUM@@QEAA@XZ
    TokenUM();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WordEnd@TokenUM@SemanticsUM@@UEBAKXZ
    virtual unsigned long WordEnd() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TokenUM@SemanticsUM@@UEAA@XZ
    virtual ~TokenUM();
};
} // namespace SemanticsUM
