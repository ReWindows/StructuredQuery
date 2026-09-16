#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 20 member(s).
namespace StructuredQuery1 {
class List {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@List@StructuredQuery1@@UEAAJPEAUIUnknown@@@Z
    virtual long Add(IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@List@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BinarySearch@List@StructuredQuery1@@UEAAHPEAUIUnknown@@@Z
    virtual int BinarySearch(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@List@StructuredQuery1@@UEAAHPEAUIUnknown@@@Z
    virtual int Contains(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Count@List@StructuredQuery1@@UEAA_KXZ
    virtual uint64_t Count();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@List@StructuredQuery1@@SAJAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@List@StructuredQuery1@@SAJ_KAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(uint64_t, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@List@StructuredQuery1@@SAJHAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Display@List@StructuredQuery1@@UEAAJPEAX_K11@Z
    virtual long Display(void *, uint64_t, uint64_t, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@List@StructuredQuery1@@UEAAJ_KAEBU_GUID@@PEAPEAX@Z
    virtual long GetItem(uint64_t, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@List@StructuredQuery1@@UEAAJ_KPEAUIUnknown@@@Z
    virtual long Insert(uint64_t, IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@List@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@List@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@List@StructuredQuery1@@UEAAJPEAUIUnknown@@@Z
    virtual long Remove(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Sort@List@StructuredQuery1@@UEAAJXZ
    virtual long Sort();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCapacity@List@StructuredQuery1@@AEAAJ_K@Z
    long EnsureCapacity(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1List@StructuredQuery1@@AEAA@XZ
    ~List();
};
} // namespace StructuredQuery1
