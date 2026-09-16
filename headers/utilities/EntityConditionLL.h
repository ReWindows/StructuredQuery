#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 4 member(s).
namespace SemanticsUM {
class EntityConditionLL {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@EntityConditionLL@SemanticsUM@@SAJPEAV12@PEAVEntityCondition@2@HPEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasEntityCondition@EntityConditionLL@SemanticsUM@@QEAA_NPEAVEntityCondition@2@@Z
    bool HasEntityCondition(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EntityConditionLL@SemanticsUM@@QEAA@XZ
    ~EntityConditionLL();
};
} // namespace SemanticsUM
