#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 12 member(s).
namespace SemanticsUM {
class CompoundCondition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChild@CompoundCondition@SemanticsUM@@QEAAXPEAVSemanticCondition@2@@Z
    void AddChild(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsCompoundCondition@CompoundCondition@SemanticsUM@@UEBAPEBVICompoundCondition@2@XZ
    virtual WindissectOpaque const * AsCompoundCondition() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CastAsCompoundCondition@CompoundCondition@SemanticsUM@@UEAAPEAV12@XZ
    virtual WindissectOpaque * CastAsCompoundCondition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CastAsEntityCondition@CompoundCondition@SemanticsUM@@UEAAPEAVEntityCondition@2@XZ
    virtual WindissectOpaque * CastAsEntityCondition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CastAsValueCondition@CompoundCondition@SemanticsUM@@UEAAPEAVValueCondition@2@XZ
    virtual WindissectOpaque * CastAsValueCondition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FirstChild@CompoundCondition@SemanticsUM@@UEBAPEAVISemanticCondition@2@XZ
    virtual WindissectOpaque * FirstChild() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FirstEntityIndicator@CompoundCondition@SemanticsUM@@UEBAPEBVIEntityIndicator@2@XZ
    virtual WindissectOpaque const * FirstEntityIndicator() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Kind@CompoundCondition@SemanticsUM@@UEBA?AW4SemanticConditionKind@2@XZ
    virtual int Kind() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompoundCondition@SemanticsUM@@UEAA@XZ
    virtual ~CompoundCondition();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompoundCondition@SemanticsUM@@IEAA@AEBVSemanticKeyword@1@0HHPEAVSemanticCondition@1@@Z
    CompoundCondition(WindissectOpaque const &, WindissectOpaque const &, int, int, WindissectOpaque *);
};
} // namespace SemanticsUM
