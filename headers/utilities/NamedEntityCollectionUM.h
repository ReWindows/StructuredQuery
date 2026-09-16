#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 7 member(s).
namespace SemanticsUM {
class NamedEntityCollectionUM {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@NamedEntityCollectionUM@SemanticsUM@@UEAAXPEAVINamedEntity@2@@Z
    virtual void Add(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@NamedEntityCollectionUM@SemanticsUM@@SAJKPEAPEAV12@@Z
    static long Create(unsigned long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Length@NamedEntityCollectionUM@SemanticsUM@@UEBAKXZ
    virtual unsigned long Length() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NamedEntityCollectionUM@SemanticsUM@@UEAA@XZ
    virtual ~NamedEntityCollectionUM();
};
} // namespace SemanticsUM
