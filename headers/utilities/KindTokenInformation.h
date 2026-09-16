#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 6 member(s).
namespace StructuredQuery1 {
class KindTokenInformation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@KindTokenInformation@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@KindTokenInformation@StructuredQuery1@@SAJPEAUIRichChunk@@HAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IRichChunk *, int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@KindTokenInformation@StructuredQuery1@@UEAAJPEAK0PEAPEA_WPEAUtagPROPVARIANT@@@Z
    virtual long GetData(unsigned long *, unsigned long *, wchar_t * *, tagPROPVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@KindTokenInformation@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@KindTokenInformation@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1KindTokenInformation@StructuredQuery1@@AEAA@XZ
    ~KindTokenInformation();
};
} // namespace StructuredQuery1
