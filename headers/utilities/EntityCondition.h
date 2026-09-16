#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 16 member(s).
namespace SemanticsUM {
class EntityCondition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsCompoundCondition@EntityCondition@SemanticsUM@@UEBAPEBVICompoundCondition@2@XZ
    virtual WindissectOpaque const * AsCompoundCondition() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsEntityCondition@EntityCondition@SemanticsUM@@UEBAPEBVIEntityCondition@2@XZ
    virtual WindissectOpaque const * AsEntityCondition() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CastAsCompoundCondition@EntityCondition@SemanticsUM@@UEAAPEAVCompoundCondition@2@XZ
    virtual WindissectOpaque * CastAsCompoundCondition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CastAsEntityCondition@EntityCondition@SemanticsUM@@UEAAPEAV12@XZ
    virtual WindissectOpaque * CastAsEntityCondition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CastAsValueCondition@EntityCondition@SemanticsUM@@UEAAPEAVValueCondition@2@XZ
    virtual WindissectOpaque * CastAsValueCondition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@EntityCondition@SemanticsUM@@SAJPEAVCompoundCondition@2@PEB_WPEBVEntity@2@KPEAPEAV12@@Z
    static long Create(WindissectOpaque *, wchar_t const *, WindissectOpaque const *, unsigned long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@EntityCondition@SemanticsUM@@SAJAEBVSemanticKeyword@2@0HHPEAVCompoundCondition@2@PEB_WPEBVEntity@2@K2AEBVITokenCollection@2@HHPEAPEAV12@@Z
    static long Create(WindissectOpaque const &, WindissectOpaque const &, int, int, WindissectOpaque *, wchar_t const *, WindissectOpaque const *, unsigned long, wchar_t const *, WindissectOpaque const &, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FullPath@EntityCondition@SemanticsUM@@UEBAPEB_WXZ
    virtual wchar_t const * FullPath() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEntity@EntityCondition@SemanticsUM@@UEBAPEBVIEntity@2@XZ
    virtual WindissectOpaque const * GetEntity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQuotePrefixStatus@EntityCondition@SemanticsUM@@UEBAKXZ
    virtual unsigned long GetQuotePrefixStatus() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputTerm@EntityCondition@SemanticsUM@@UEBAPEB_WXZ
    virtual wchar_t const * InputTerm() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Kind@EntityCondition@SemanticsUM@@UEBA?AW4SemanticConditionKind@2@XZ
    virtual int Kind() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EntityCondition@SemanticsUM@@UEAA@XZ
    virtual ~EntityCondition();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EntityCondition@SemanticsUM@@AEAA@AEBVSemanticKeyword@1@0PEA_WHHPEAVCompoundCondition@1@PEB_WPEBVEntity@1@K@Z
    EntityCondition(WindissectOpaque const &, WindissectOpaque const &, wchar_t *, int, int, WindissectOpaque *, wchar_t const *, WindissectOpaque const *, unsigned long);
};
} // namespace SemanticsUM
