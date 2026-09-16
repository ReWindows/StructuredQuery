#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 8 member(s).
namespace StructuredQuery1 {
class MnemonicsCollection {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MnemonicsCollection@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@MnemonicsCollection@StructuredQuery1@@SAJPEB_WAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(wchar_t const *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@MnemonicsCollection@StructuredQuery1@@UEAAJIPEAPEA_W@Z
    virtual long GetAt(unsigned int, wchar_t * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@MnemonicsCollection@StructuredQuery1@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MnemonicsCollection@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MnemonicsCollection@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MnemonicsCollection@StructuredQuery1@@AEAA@XZ
    MnemonicsCollection();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MnemonicsCollection@StructuredQuery1@@AEAA@XZ
    ~MnemonicsCollection();
};
} // namespace StructuredQuery1
