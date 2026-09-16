#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 7 member(s).
namespace StructuredQuery1 {
class NamedEntity {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@NamedEntity@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@NamedEntity@StructuredQuery1@@SAJPEBV1SemanticsUM@@_NAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(WindissectOpaque const *, bool, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultPhrase@NamedEntity@StructuredQuery1@@UEAAJPEAPEA_W@Z
    virtual long DefaultPhrase(wchar_t * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@NamedEntity@StructuredQuery1@@UEAAJPEAPEA_W@Z
    virtual long GetValue(wchar_t * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@NamedEntity@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@NamedEntity@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NamedEntity@StructuredQuery1@@AEAA@PEBV0SemanticsUM@@@Z
    NamedEntity(WindissectOpaque const *);
};
} // namespace StructuredQuery1
