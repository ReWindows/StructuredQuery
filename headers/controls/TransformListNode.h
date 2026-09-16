#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 4 member(s).
namespace StructuredQuery1 {
class TransformListNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@TransformListNode@StructuredQuery1@@SAJAEBU_tagpropertykey@@PEAUIUnknown@@PEAPEAV12@@Z
    static long Create(_tagpropertykey const &, IUnknown *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformer@TransformListNode@StructuredQuery1@@QEAAJPEAUIUnknown@@@Z
    long SetTransformer(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TransformListNode@StructuredQuery1@@QEAA@XZ
    ~TransformListNode();
};
} // namespace StructuredQuery1
