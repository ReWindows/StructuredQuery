#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 15 member(s).
class UnknownArrayEnumerator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UnknownArrayEnumerator@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@UnknownArrayEnumerator@@UEAAJPEAPEAUIEnumUnknown@@@Z
    virtual long Clone(IEnumUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@UnknownArrayEnumerator@@UEAAJPEAPEAUIEnumVARIANT@@@Z
    virtual long Clone(IEnumVARIANT * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@UnknownArrayEnumerator@@SAJPEAUIObjectArray@@IAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IObjectArray *, unsigned int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@UnknownArrayEnumerator@@UEAAJKPEAPEAUIUnknown@@PEAK@Z
    virtual long Next(unsigned long, IUnknown * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@UnknownArrayEnumerator@@UEAAJKPEAUtagVARIANT@@PEAK@Z
    virtual long Next(unsigned long, tagVARIANT *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UnknownArrayEnumerator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UnknownArrayEnumerator@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@UnknownArrayEnumerator@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@UnknownArrayEnumerator@@UEAAJK@Z
    virtual long Skip(unsigned long);
};
