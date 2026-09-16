#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 38 member(s).
namespace StructuredQuery1 {
class RelationshipInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddIndicator@RelationshipInfo@StructuredQuery1@@UEAAJPEAUIIndicatorInfo@2@@Z
    virtual long AddIndicator(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMetaData@RelationshipInfo@StructuredQuery1@@UEAAJPEB_W0@Z
    virtual long AddMetaData(wchar_t const *, wchar_t const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RelationshipInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRestriction@RelationshipInfo@StructuredQuery1@@UEAAJPEAUIRestrictionInfo@2@@Z
    virtual long AddRestriction(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareTo@RelationshipInfo@StructuredQuery1@@UEAAHPEAUIUnknown@@@Z
    virtual int CompareTo(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePathsRecursively@RelationshipInfo@StructuredQuery1@@UEAAJPEAUIPathNodeInfo@2@@Z
    virtual long ComputePathsRecursively(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFragmentsAndTrie@RelationshipInfo@StructuredQuery1@@UEAAJPEAUIHashtable@2@PEAUIList@2@PEAVTrie@2@0K@Z
    virtual long CreateFragmentsAndTrie(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@RelationshipInfo@StructuredQuery1@@SAJPEB_WPEAUIEntityInfo@2@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(wchar_t const *, WindissectOpaque *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destination@RelationshipInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Destination(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Display@RelationshipInfo@StructuredQuery1@@UEAAJPEAX_K11@Z
    virtual long Display(void *, uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@RelationshipInfo@StructuredQuery1@@UEAAHPEAUIUnknown@@@Z
    virtual int Equals(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashCode@RelationshipInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long GetHashCode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndicatorCount@RelationshipInfo@StructuredQuery1@@UEAA_KXZ
    virtual uint64_t IndicatorCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Indicators@RelationshipInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Indicators(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MetaData@RelationshipInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long MetaData(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Name@RelationshipInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Name(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Populate@RelationshipInfo@StructuredQuery1@@UEAAJPEBVSchemaStore@2@PEBVSchemaBinary@SemanticsUM@@PEAVRelationship@5@@Z
    virtual long Populate(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreferredPhrase@RelationshipInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long PreferredPhrase(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prepare1@RelationshipInfo@StructuredQuery1@@UEAAJPEAUIHashtable@2@0PEAUIList@2@@Z
    virtual long Prepare1(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RelationshipInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RelationshipInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Restrictions@RelationshipInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Restrictions(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsafeName@RelationshipInfo@StructuredQuery1@@UEAAPEB_WXZ
    virtual wchar_t const * UnsafeName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsafePreferredPhrase@RelationshipInfo@StructuredQuery1@@UEAAPEB_WXZ
    virtual wchar_t const * UnsafePreferredPhrase();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RelationshipInfo@StructuredQuery1@@AEAA@PEAUIConstantString@1@PEAUIEntityInfo@1@@Z
    RelationshipInfo(WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RelationshipInfo@StructuredQuery1@@AEAA@XZ
    ~RelationshipInfo();
};
} // namespace StructuredQuery1
