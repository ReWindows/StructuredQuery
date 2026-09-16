#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 6 member(s).
namespace StructuredQuery1 {
class MetaData {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MetaData@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@MetaData@StructuredQuery1@@SAJPEBV1SemanticsUM@@_NAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(WindissectOpaque const *, bool, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@MetaData@StructuredQuery1@@UEAAJPEAPEA_W0@Z
    virtual long GetData(wchar_t * *, wchar_t * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MetaData@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MetaData@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MetaData@StructuredQuery1@@AEAA@PEBV0SemanticsUM@@@Z
    MetaData(WindissectOpaque const *);
};
} // namespace StructuredQuery1
