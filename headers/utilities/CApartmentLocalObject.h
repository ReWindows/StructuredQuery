#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 6 member(s).
class CApartmentLocalObject {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApartmentObject@CApartmentLocalObject@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long GetApartmentObject(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApartmentObject@CApartmentLocalObject@@QEAAJPEAUIUnknown@@@Z
    long SetApartmentObject(IUnknown *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DelayAllocateTLS@CApartmentLocalObject@@AEAAJXZ
    long _DelayAllocateTLS();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnterCriticalSection@CApartmentLocalObject@@AEAAXXZ
    void _EnterCriticalSection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInterfaceFromGIT@CApartmentLocalObject@@AEAAJKAEBU_GUID@@PEAPEAX@Z
    long _GetInterfaceFromGIT(unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterInterfaceInGIT@CApartmentLocalObject@@AEAAJPEAKPEAUIUnknown@@@Z
    long _RegisterInterfaceInGIT(unsigned long *, IUnknown *);
};
