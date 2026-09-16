#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 6 member(s).
namespace StructuredQuery1 {
class TokenInformation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TokenInformation@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@TokenInformation@StructuredQuery1@@SAJJJPEAVSolution@2@PEAUtagPROPVARIANT@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(long, long, WindissectOpaque *, tagPROPVARIANT *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@TokenInformation@StructuredQuery1@@UEAAJPEAK0PEAPEA_WPEAUtagPROPVARIANT@@@Z
    virtual long GetData(unsigned long *, unsigned long *, wchar_t * *, tagPROPVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TokenInformation@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TokenInformation@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TokenInformation@StructuredQuery1@@AEAA@XZ
    ~TokenInformation();
};
} // namespace StructuredQuery1
