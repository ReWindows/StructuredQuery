#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 6 member(s).
namespace SemanticsUM {
class StructuredSemanticSolution {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StructuredSemanticSolution@SemanticsUM@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@StructuredSemanticSolution@SemanticsUM@@SAJNPEBVEntity@2@PEAVCompoundCondition@2@PEB_WKKPEAUIWordBreaker@@PEAPEAV12@@Z
    static long Create(double, WindissectOpaque const *, WindissectOpaque *, wchar_t const *, unsigned long, unsigned long, IWordBreaker *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StructuredSemanticSolution@SemanticsUM@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StructuredSemanticSolution@SemanticsUM@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StructuredSemanticSolution@SemanticsUM@@QEAA@XZ
    ~StructuredSemanticSolution();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StructuredSemanticSolution@SemanticsUM@@AEAA@NPEBVEntity@1@PEAVCompoundCondition@1@PEA_WKKPEAUIWordBreaker@@@Z
    StructuredSemanticSolution(double, WindissectOpaque const *, WindissectOpaque *, wchar_t *, unsigned long, unsigned long, IWordBreaker *);
};
} // namespace SemanticsUM
