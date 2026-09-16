#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 9 member(s).
namespace StructuredQuery1 {
class EnumerateStaticVARIANTs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@EnumerateStaticVARIANTs@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@EnumerateStaticVARIANTs@StructuredQuery1@@UEAAJPEAPEAUIEnumVARIANT@@@Z
    virtual long Clone(IEnumVARIANT * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@EnumerateStaticVARIANTs@StructuredQuery1@@SAJPEAUtagVARIANT@@KKAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(tagVARIANT *, unsigned long, unsigned long, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EnumerateStaticVARIANTs@StructuredQuery1@@QEAA@PEAUtagVARIANT@@KK@Z
    EnumerateStaticVARIANTs(tagVARIANT *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@EnumerateStaticVARIANTs@StructuredQuery1@@UEAAJKPEAUtagVARIANT@@PEAK@Z
    virtual long Next(unsigned long, tagVARIANT *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@EnumerateStaticVARIANTs@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@EnumerateStaticVARIANTs@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@EnumerateStaticVARIANTs@StructuredQuery1@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@EnumerateStaticVARIANTs@StructuredQuery1@@UEAAJK@Z
    virtual long Skip(unsigned long);
};
} // namespace StructuredQuery1
