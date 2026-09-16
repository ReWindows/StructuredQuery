#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 15 member(s).
namespace StructuredQuery1 {
class Interval {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Interval@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@Interval@StructuredQuery1@@SAJW4tagINTERVAL_LIMIT_KIND@@PEAUtagPROPVARIANT@@01AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(int, tagPROPVARIANT *, int, tagPROPVARIANT *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@Interval@StructuredQuery1@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@Interval@StructuredQuery1@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLimits@Interval@StructuredQuery1@@UEAAJPEAW4tagINTERVAL_LIMIT_KIND@@PEAUtagPROPVARIANT@@01@Z
    virtual long GetLimits(int *, tagPROPVARIANT *, int *, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@Interval@StructuredQuery1@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirty@Interval@StructuredQuery1@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@Interval@StructuredQuery1@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Interval@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Interval@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@Interval@StructuredQuery1@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Interval@StructuredQuery1@@AEAA@XZ
    ~Interval();
};
} // namespace StructuredQuery1
