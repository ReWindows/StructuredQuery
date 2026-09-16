#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 14 member(s).
class FixedCapacityObjectCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFromArray@FixedCapacityObjectCollection@@UEAAJPEAUIObjectArray@@@Z
    virtual long AddFromArray(IObjectArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddObject@FixedCapacityObjectCollection@@UEAAJPEAUIUnknown@@@Z
    virtual long AddObject(IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@FixedCapacityObjectCollection@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@FixedCapacityObjectCollection@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@FixedCapacityObjectCollection@@SAJIAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(unsigned int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@FixedCapacityObjectCollection@@SAJPEAUIEnumUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IEnumUnknown *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@FixedCapacityObjectCollection@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetAt(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@FixedCapacityObjectCollection@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@FixedCapacityObjectCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@FixedCapacityObjectCollection@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveObjectAt@FixedCapacityObjectCollection@@UEAAJI@Z
    virtual long RemoveObjectAt(unsigned int);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FixedCapacityObjectCollection@@AEAA@XZ
    FixedCapacityObjectCollection();
};
