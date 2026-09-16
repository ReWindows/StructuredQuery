#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 23 member(s).
namespace SemanticsUM {
class SchemaEngine {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SchemaEngine@SemanticsUM@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanTake@SchemaEngine@SemanticsUM@@QEBAHPEBVEntity@2@0@Z
    int CanTake(WindissectOpaque const *, WindissectOpaque const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compatible@SchemaEngine@SemanticsUM@@QEBAPEBVEntity@2@PEBV32@0@Z
    WindissectOpaque const * Compatible(WindissectOpaque const *, WindissectOpaque const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@SchemaEngine@SemanticsUM@@SAJPEAVSchemaBinary@2@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Entities@SchemaEngine@SemanticsUM@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Entities(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateLattice@SchemaEngine@SemanticsUM@@QEBAJPEB_W_KAEBVITokenCollection@2@AEBVINamedEntityCollection@2@PEBVCustomProperty@2@PEBVEntityPreferenceCollectionUM@2@_NPEAVLattice@2@@Z
    long GenerateLattice(wchar_t const *, uint64_t, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const *, WindissectOpaque const *, bool, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEntity@SchemaEngine@SemanticsUM@@UEAAJPEB_WPEAPEAUIEntity@@@Z
    virtual long GetEntity(wchar_t const *, IEntity * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InheritsFrom@SchemaEngine@SemanticsUM@@QEBA_NPEBVEntity@2@0@Z
    bool InheritsFrom(WindissectOpaque const *, WindissectOpaque const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SchemaEngine@SemanticsUM@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Localize@SchemaEngine@SemanticsUM@@UEAAJKPEAUISchemaLocalizerSupport@@@Z
    virtual long Localize(unsigned long, ISchemaLocalizerSupport *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupAuthoredNamedEntity@SchemaEngine@SemanticsUM@@UEAAJPEAUIEntity@@PEB_WPEAUITokenCollection@@KPEAKPEAPEA_W@Z
    virtual long LookupAuthoredNamedEntity(IEntity *, wchar_t const *, ITokenCollection *, unsigned long, unsigned long *, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MetaData@SchemaEngine@SemanticsUM@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long MetaData(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SchemaEngine@SemanticsUM@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SchemaEngine@SemanticsUM@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RootEntity@SchemaEngine@SemanticsUM@@UEAAJPEAPEAUIEntity@@@Z
    virtual long RootEntity(IEntity * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveBinary@SchemaEngine@SemanticsUM@@UEAAJPEB_W@Z
    virtual long SaveBinary(wchar_t const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeQuotePrefixStatus@SchemaEngine@SemanticsUM@@CAKPEB_W_KAEBVITokenCollection@2@PEBGK_N44KK@Z
    static unsigned long ComputeQuotePrefixStatus(wchar_t const *, uint64_t, WindissectOpaque const &, unsigned short const *, unsigned long, bool, bool, bool, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmitBlurb@SchemaEngine@SemanticsUM@@AEBAJPEB_W_KAEBVITokenCollection@2@PEBGKKKPEAVLattice@2@@Z
    long EmitBlurb(wchar_t const *, uint64_t, WindissectOpaque const &, unsigned short const *, unsigned long, unsigned long, unsigned long, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GeneratePreferredEntities@SchemaEngine@SemanticsUM@@AEBAJPEBVEntityPreferenceCollectionUM@2@_NPEAVFragmentSet@2@@Z
    long GeneratePreferredEntities(WindissectOpaque const *, bool, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeAnnotationFragments@SchemaEngine@SemanticsUM@@CAJPEB_W_KAEBVITokenCollection@2@PEBGKPEBVTrieNode@2@KKPEAVTokenFragmentStatistics@2@W4tagSTRUCTURED_QUERY_SYNTAX@@W4CASE_REQUIREMENT@@_NPEAVFragmentSet@2@@Z
    static long MakeAnnotationFragments(wchar_t const *, uint64_t, WindissectOpaque const &, unsigned short const *, unsigned long, WindissectOpaque const *, unsigned long, unsigned long, WindissectOpaque *, int, int, bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeNamedEntityFragments@SchemaEngine@SemanticsUM@@AEBAJPEB_W_KAEBVITokenCollection@2@PEBGKAEBVINamedEntityCollection@2@KJ_N5PEAVFragmentSet@2@@Z
    long MakeNamedEntityFragments(wchar_t const *, uint64_t, WindissectOpaque const &, unsigned short const *, unsigned long, WindissectOpaque const &, unsigned long, long, bool, bool, WindissectOpaque *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SchemaEngine@SemanticsUM@@AEAA@PEAVSchemaBinary@1@@Z
    SchemaEngine(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SchemaEngine@SemanticsUM@@AEAA@XZ
    ~SchemaEngine();
};
} // namespace SemanticsUM
