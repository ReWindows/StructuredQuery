#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 13 member(s).
namespace SemanticsUM {
class SemanticCondition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSibling@SemanticCondition@SemanticsUM@@QEAAXPEAV12@@Z
    void AddSibling(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsCompoundCondition@SemanticCondition@SemanticsUM@@UEBAPEBVICompoundCondition@2@XZ
    virtual WindissectOpaque const * AsCompoundCondition() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsEntityCondition@SemanticCondition@SemanticsUM@@UEBAPEBVIEntityCondition@2@XZ
    virtual WindissectOpaque const * AsEntityCondition() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsValueCondition@SemanticCondition@SemanticsUM@@UEBAPEBVIValueCondition@2@XZ
    virtual WindissectOpaque const * AsValueCondition() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginActualToken@SemanticCondition@SemanticsUM@@UEBAHXZ
    virtual int BeginActualToken() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connector@SemanticCondition@SemanticsUM@@UEBAAEBVSemanticKeyword@2@XZ
    virtual WindissectOpaque const & Connector() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndActualToken@SemanticCondition@SemanticsUM@@UEBAHXZ
    virtual int EndActualToken() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@SemanticCondition@SemanticsUM@@UEBAPEAVISemanticCondition@2@XZ
    virtual WindissectOpaque * GetParent() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Modifier@SemanticCondition@SemanticsUM@@UEBAAEBVSemanticKeyword@2@XZ
    virtual WindissectOpaque const & Modifier() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextSibling@SemanticCondition@SemanticsUM@@UEBAPEAVISemanticCondition@2@XZ
    virtual WindissectOpaque * NextSibling() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SemanticCondition@SemanticsUM@@UEAA@XZ
    virtual ~SemanticCondition();
};
} // namespace SemanticsUM
