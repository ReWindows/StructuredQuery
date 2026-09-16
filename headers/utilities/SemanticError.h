#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 8 member(s).
namespace SemanticsUM {
class SemanticError {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginActualToken@SemanticError@SemanticsUM@@UEBAHXZ
    virtual int BeginActualToken() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@SemanticError@SemanticsUM@@SAJHHW4SemanticErrorKind@2@PEAPEAV12@@Z
    static long Create(int, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndActualToken@SemanticError@SemanticsUM@@UEBAHXZ
    virtual int EndActualToken() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSemanticErrorKind@SemanticError@SemanticsUM@@UEBA?AW4SemanticErrorKind@2@XZ
    virtual int GetSemanticErrorKind() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextSibling@SemanticError@SemanticsUM@@UEBAPEBVISemanticError@2@XZ
    virtual WindissectOpaque const * NextSibling() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SemanticError@SemanticsUM@@UEAA@XZ
    virtual ~SemanticError();
};
} // namespace SemanticsUM
