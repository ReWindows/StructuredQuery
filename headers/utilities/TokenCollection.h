#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 7 member(s).
namespace StructuredQuery1 {
class TokenCollection {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TokenCollection@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@TokenCollection@StructuredQuery1@@SAJAEBVTokenCollectionUM@SemanticsUM@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(WindissectOpaque const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToken@TokenCollection@StructuredQuery1@@UEAAJKPEAK0PEAPEA_W@Z
    virtual long GetToken(unsigned long, unsigned long *, unsigned long *, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NumberOfTokens@TokenCollection@StructuredQuery1@@UEAAJPEAK@Z
    virtual long NumberOfTokens(unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TokenCollection@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TokenCollection@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TokenCollection@StructuredQuery1@@AEAA@XZ
    ~TokenCollection();
};
} // namespace StructuredQuery1
