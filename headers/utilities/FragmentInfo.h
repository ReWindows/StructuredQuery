#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 20 member(s).
namespace StructuredQuery1 {
class FragmentInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@FragmentInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@FragmentInfo@StructuredQuery1@@SAJPEAUIEntityInfo@2@PEAUIConstantString@2@HAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@FragmentInfo@StructuredQuery1@@SAJPEAUIRelationshipInfo@2@PEAUIConstantString@2@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@FragmentInfo@StructuredQuery1@@SAJPEAUISyntaxElementInfo@2@W4FragmentType@SemanticsUM@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(WindissectOpaque *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Display@FragmentInfo@StructuredQuery1@@UEAAJPEAX_K11@Z
    virtual long Display(void *, uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Entity@FragmentInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Entity(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Populate@FragmentInfo@StructuredQuery1@@UEAAJPEBVSchemaStore@2@PEBVSchemaBinary@SemanticsUM@@PEAVFragmentTemplate@5@@Z
    virtual long Populate(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@FragmentInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Relationship@FragmentInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Relationship(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@FragmentInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Restriction@FragmentInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Restriction(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyntaxElement@FragmentInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long SyntaxElement(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Type@FragmentInfo@StructuredQuery1@@UEAA?AW4FragmentType@SemanticsUM@@XZ
    virtual int Type();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsafeRestriction@FragmentInfo@StructuredQuery1@@UEAAPEB_WXZ
    virtual wchar_t const * UnsafeRestriction();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FragmentInfo@StructuredQuery1@@AEAA@PEAUIRelationshipInfo@1@PEAUIConstantString@1@@Z
    FragmentInfo(WindissectOpaque *, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FragmentInfo@StructuredQuery1@@AEAA@PEAUIEntityInfo@1@PEAUIConstantString@1@H@Z
    FragmentInfo(WindissectOpaque *, WindissectOpaque *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FragmentInfo@StructuredQuery1@@AEAA@XZ
    ~FragmentInfo();
};
} // namespace StructuredQuery1
