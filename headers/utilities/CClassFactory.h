#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 5 member(s).
class CClassFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CClassFactory@@QEAAKXZ
    unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CClassFactory@@QEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockServer@CClassFactory@@QEAAJH@Z
    long LockServer(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CClassFactory@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CClassFactory@@QEAAKXZ
    unsigned long Release();
};
