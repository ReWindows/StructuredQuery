#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 5 member(s).
class CGlobalObject {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CGlobalObject@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedObject@CGlobalObject@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long GetCachedObject(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CGlobalObject@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryObject@CGlobalObject@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryObject(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CGlobalObject@@UEAAKXZ
    virtual unsigned long Release();
};
