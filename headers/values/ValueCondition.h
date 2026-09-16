#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 13 member(s).
namespace SemanticsUM {
class ValueCondition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsValueCondition@ValueCondition@SemanticsUM@@UEBAPEBVIValueCondition@2@XZ
    virtual WindissectOpaque const * AsValueCondition() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CastAsCompoundCondition@ValueCondition@SemanticsUM@@UEAAPEAVCompoundCondition@2@XZ
    virtual WindissectOpaque * CastAsCompoundCondition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CastAsEntityCondition@ValueCondition@SemanticsUM@@UEAAPEAVEntityCondition@2@XZ
    virtual WindissectOpaque * CastAsEntityCondition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CastAsValueCondition@ValueCondition@SemanticsUM@@UEAAPEAV12@XZ
    virtual WindissectOpaque * CastAsValueCondition();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEntity@ValueCondition@SemanticsUM@@UEBAPEBVIEntity@2@XZ
    virtual WindissectOpaque const * GetEntity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQuotePrefixStatus@ValueCondition@SemanticsUM@@UEBAKXZ
    virtual unsigned long GetQuotePrefixStatus() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputTerm@ValueCondition@SemanticsUM@@UEBAPEB_WXZ
    virtual wchar_t const * InputTerm() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Kind@ValueCondition@SemanticsUM@@UEBA?AW4SemanticConditionKind@2@XZ
    virtual int Kind() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Value@ValueCondition@SemanticsUM@@UEBAPEB_WXZ
    virtual wchar_t const * Value() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ValueCondition@SemanticsUM@@UEAA@XZ
    virtual ~ValueCondition();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ValueCondition@SemanticsUM@@AEAA@AEBVSemanticKeyword@1@0PEA_WHHPEAVCompoundCondition@1@PEBVEntity@1@1K@Z
    ValueCondition(WindissectOpaque const &, WindissectOpaque const &, wchar_t *, int, int, WindissectOpaque *, WindissectOpaque const *, wchar_t *, unsigned long);
};
} // namespace SemanticsUM
