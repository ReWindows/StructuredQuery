#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 4 member(s).
namespace StructuredQuery1 {
class Trie {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@Trie@StructuredQuery1@@QEAAJPEAUIIndicatorInfo@2@PEAUIFragmentInfo@2@PEAUIHashtable@2@@Z
    long Add(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@Trie@StructuredQuery1@@SAJKPEAPEAV12@@Z
    static long Create(unsigned long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Populate@Trie@StructuredQuery1@@QEAAJPEBVSchemaStore@2@PEAVSchemaBinary@SemanticsUM@@@Z
    long Populate(WindissectOpaque const *, WindissectOpaque *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Trie@StructuredQuery1@@AEAA@KPEAUIList@1@@Z
    Trie(unsigned long, WindissectOpaque *);
};
} // namespace StructuredQuery1
