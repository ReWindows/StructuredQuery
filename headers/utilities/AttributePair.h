#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 6 member(s).
namespace StructuredQuery1 {
class AttributePair {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AttributePair@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@AttributePair@StructuredQuery1@@SAJAEBU_GUID@@PEAUIConditionAttribute@@0PEAPEAX@Z
    static long CreateInstance(_GUID const &, IConditionAttribute *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPair@AttributePair@StructuredQuery1@@UEAAJPEAU_GUID@@PEAPEAUIConditionAttribute@@@Z
    virtual long GetPair(_GUID *, IConditionAttribute * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AttributePair@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AttributePair@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AttributePair@StructuredQuery1@@AEAA@XZ
    ~AttributePair();
};
} // namespace StructuredQuery1
