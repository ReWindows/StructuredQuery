#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 10 member(s).
namespace StructuredQuery1 {
class Relationship {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Relationship@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@Relationship@StructuredQuery1@@SAJPEBV1SemanticsUM@@_NAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(WindissectOpaque const *, bool, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultPhrase@Relationship@StructuredQuery1@@UEAAJPEAPEA_W@Z
    virtual long DefaultPhrase(wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destination@Relationship@StructuredQuery1@@UEAAJPEAPEAUIEntity@@@Z
    virtual long Destination(IEntity * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReal@Relationship@StructuredQuery1@@UEAAJPEAH@Z
    virtual long IsReal(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MetaData@Relationship@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long MetaData(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Name@Relationship@StructuredQuery1@@UEAAJPEAPEA_W@Z
    virtual long Name(wchar_t * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Relationship@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Relationship@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Relationship@StructuredQuery1@@AEAA@PEBV0SemanticsUM@@_N@Z
    Relationship(WindissectOpaque const *, bool);
};
} // namespace StructuredQuery1
