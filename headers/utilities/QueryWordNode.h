#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 7 member(s).
namespace StructuredQuery1 {
class QueryWordNode {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@QueryWordNode@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSibling@QueryWordNode@StructuredQuery1@@QEAAXPEAV12@@Z
    void AddSibling(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@QueryWordNode@StructuredQuery1@@SAJKKPEB_WKPEAPEAV12@@Z
    static long Create(unsigned long, unsigned long, wchar_t const *, unsigned long, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@QueryWordNode@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@QueryWordNode@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFirstChild@QueryWordNode@StructuredQuery1@@QEAAXPEAV12@@Z
    void SetFirstChild(WindissectOpaque *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QueryWordNode@StructuredQuery1@@AEAA@XZ
    ~QueryWordNode();
};
} // namespace StructuredQuery1
