#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 6 member(s).
namespace StructuredQuery1 {
class LinkedListOfHitRanges {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAllHits@LinkedListOfHitRanges@StructuredQuery1@@QEAAJPEAV?$GrowableBuffer@UtagHITRANGE@@@@@Z
    long AddAllHits(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@LinkedListOfHitRanges@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@LinkedListOfHitRanges@StructuredQuery1@@SAJUtagHITRANGE@@PEAV12@PEAPEAV12@@Z
    static long Create(tagHITRANGE, WindissectOpaque *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@LinkedListOfHitRanges@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@LinkedListOfHitRanges@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LinkedListOfHitRanges@StructuredQuery1@@AEAA@XZ
    ~LinkedListOfHitRanges();
};
} // namespace StructuredQuery1
