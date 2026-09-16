#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 7 member(s).
namespace StructuredQuery1 {
class DefaultMostRelevantPropertiesList {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DefaultMostRelevantPropertiesList@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DefaultMostRelevantPropertiesList@StructuredQuery1@@SAJAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@DefaultMostRelevantPropertiesList@StructuredQuery1@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetAt(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@DefaultMostRelevantPropertiesList@StructuredQuery1@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DefaultMostRelevantPropertiesList@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DefaultMostRelevantPropertiesList@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DefaultMostRelevantPropertiesList@StructuredQuery1@@AEAA@XZ
    DefaultMostRelevantPropertiesList();
};
} // namespace StructuredQuery1
