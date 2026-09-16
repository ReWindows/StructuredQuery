#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 9 member(s).
namespace StructuredQuery1 {
class ConstantNumber {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ConstantNumber@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ConstantNumber@StructuredQuery1@@SAJ_KAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(uint64_t, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Display@ConstantNumber@StructuredQuery1@@UEAAJPEAX_K11@Z
    virtual long Display(void *, uint64_t, uint64_t, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumber@ConstantNumber@StructuredQuery1@@UEAA_KXZ
    virtual uint64_t GetNumber();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ConstantNumber@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ConstantNumber@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace StructuredQuery1
