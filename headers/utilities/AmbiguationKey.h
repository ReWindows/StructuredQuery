#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 18 member(s).
namespace StructuredQuery1 {
class AmbiguationKey {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AmbiguationKey@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@AmbiguationKey@StructuredQuery1@@SAJPEAUIIndicatorInfo@2@PEAUIEntityInfo@2@1AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destination@AmbiguationKey@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Destination(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Display@AmbiguationKey@StructuredQuery1@@UEAAJPEAX_K11@Z
    virtual long Display(void *, uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@AmbiguationKey@StructuredQuery1@@UEAAHPEAUIUnknown@@@Z
    virtual int Equals(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashCode@AmbiguationKey@StructuredQuery1@@UEAAKXZ
    virtual unsigned long GetHashCode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Indicator@AmbiguationKey@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Indicator(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AmbiguationKey@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AmbiguationKey@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Source@AmbiguationKey@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Source(_GUID const &, void * *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AmbiguationKey@StructuredQuery1@@AEAA@PEAUIIndicatorInfo@1@PEAUIEntityInfo@1@1@Z
    AmbiguationKey(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AmbiguationKey@StructuredQuery1@@AEAA@XZ
    ~AmbiguationKey();
};
} // namespace StructuredQuery1
