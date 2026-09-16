#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 7 member(s).
namespace StructuredQuery1 {
class TokenInformationComplete {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TokenInformationComplete@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@TokenInformationComplete@StructuredQuery1@@SAJPEAUIStream@@_NAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IStream *, bool, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@TokenInformationComplete@StructuredQuery1@@UEAAJPEAK0PEAPEA_WPEAUtagPROPVARIANT@@@Z
    virtual long GetData(unsigned long *, unsigned long *, wchar_t * *, tagPROPVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TokenInformationComplete@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TokenInformationComplete@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TokenInformationComplete@StructuredQuery1@@AEAA@XZ
    TokenInformationComplete();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TokenInformationComplete@StructuredQuery1@@AEAA@XZ
    ~TokenInformationComplete();
};
} // namespace StructuredQuery1
