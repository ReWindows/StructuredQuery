#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 21 member(s).
namespace StructuredQuery1 {
class ConstantString {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ConstantString@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareTo@ConstantString@StructuredQuery1@@UEAAHPEAUIUnknown@@@Z
    virtual int CompareTo(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ConstantString@StructuredQuery1@@SAJPEB_WAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(wchar_t const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ConstantString@StructuredQuery1@@SAJPEB_W_KAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(wchar_t const *, uint64_t, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Display@ConstantString@StructuredQuery1@@UEAAJPEAX_K11@Z
    virtual long Display(void *, uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@ConstantString@StructuredQuery1@@UEAAHPEAUIUnknown@@@Z
    virtual int Equals(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashCode@ConstantString@StructuredQuery1@@UEAAKXZ
    virtual unsigned long GetHashCode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@ConstantString@StructuredQuery1@@UEAAJPEAPEA_W@Z
    virtual long GetString(wchar_t * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnsafeString@ConstantString@StructuredQuery1@@UEAAPEB_WXZ
    virtual wchar_t const * GetUnsafeString();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ConstantString@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ConstantString@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConstantString@StructuredQuery1@@AEAA@XZ
    ~ConstantString();
};
} // namespace StructuredQuery1
