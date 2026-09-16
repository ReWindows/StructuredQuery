#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 48 member(s).
namespace StructuredQuery1 {
class EntityInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDerivedEntity@EntityInfo@StructuredQuery1@@UEAAJPEAUIEntityInfo@2@@Z
    virtual long AddDerivedEntity(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddIndicator@EntityInfo@StructuredQuery1@@UEAAJPEAUIIndicatorInfo@2@@Z
    virtual long AddIndicator(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMetaData@EntityInfo@StructuredQuery1@@UEAAJPEB_W0@Z
    virtual long AddMetaData(wchar_t const *, wchar_t const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@EntityInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRelationship@EntityInfo@StructuredQuery1@@UEAAJPEB_WPEAUIEntityInfo@2@AEBU_GUID@@PEAPEAX@Z
    virtual long AddRelationship(wchar_t const *, WindissectOpaque *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRestriction@EntityInfo@StructuredQuery1@@UEAAJPEAUIRestrictionInfo@2@@Z
    virtual long AddRestriction(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Base@EntityInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Base(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareTo@EntityInfo@StructuredQuery1@@UEAAHPEAUIUnknown@@@Z
    virtual int CompareTo(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePathsForAllAncestors@EntityInfo@StructuredQuery1@@UEAAJPEAUIRelationshipInfo@2@PEAUIPathNodeInfo@2@@Z
    virtual long ComputePathsForAllAncestors(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePathsForAllDerivedEntities@EntityInfo@StructuredQuery1@@UEAAJPEAUIRelationshipInfo@2@PEAUIPathNodeInfo@2@@Z
    virtual long ComputePathsForAllDerivedEntities(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePathsRecursively@EntityInfo@StructuredQuery1@@UEAAJPEAUIRelationshipInfo@2@PEAUIPathNodeInfo@2@@Z
    virtual long ComputePathsRecursively(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFragmentsAndTrie@EntityInfo@StructuredQuery1@@UEAAJPEAUIHashtable@2@PEAUIList@2@1PEAVTrie@2@0K@Z
    virtual long CreateFragmentsAndTrie(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@EntityInfo@StructuredQuery1@@SAJPEAUIConstantString@2@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(WindissectOpaque *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Display@EntityInfo@StructuredQuery1@@UEAAJPEAX_K11@Z
    virtual long Display(void *, uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@EntityInfo@StructuredQuery1@@UEAAHPEAUIUnknown@@@Z
    virtual int Equals(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashCode@EntityInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long GetHashCode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndicatorCount@EntityInfo@StructuredQuery1@@UEAA_KXZ
    virtual uint64_t IndicatorCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Indicators@EntityInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Indicators(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InheritsFrom@EntityInfo@StructuredQuery1@@UEAAHPEAUIEntityInfo@2@@Z
    virtual int InheritsFrom(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@EntityInfo@StructuredQuery1@@UEAAJPEAUIEntityInfo@2@@Z
    virtual long Initialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@EntityInfo@StructuredQuery1@@UEAAHXZ
    virtual int IsInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MetaData@EntityInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long MetaData(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Name@EntityInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Name(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OutgoingRelations@EntityInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long OutgoingRelations(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Populate@EntityInfo@StructuredQuery1@@UEAAJPEBVSchemaStore@2@PEBVSchemaBinary@SemanticsUM@@PEAVEntity@5@@Z
    virtual long Populate(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreferredPhrase@EntityInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long PreferredPhrase(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prepare0@EntityInfo@StructuredQuery1@@UEAAJXZ
    virtual long Prepare0();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prepare1@EntityInfo@StructuredQuery1@@UEAAJPEAUIHashtable@2@0PEAUIList@2@K@Z
    virtual long Prepare1(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prepare2@EntityInfo@StructuredQuery1@@UEAAJPEAUIList@2@PEAUIEntityInfo@2@@Z
    virtual long Prepare2(WindissectOpaque *, WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@EntityInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@EntityInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Restrictions@EntityInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Restrictions(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsafeName@EntityInfo@StructuredQuery1@@UEAAPEB_WXZ
    virtual wchar_t const * UnsafeName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsafePreferredPhrase@EntityInfo@StructuredQuery1@@UEAAPEB_WXZ
    virtual wchar_t const * UnsafePreferredPhrase();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EntityInfo@StructuredQuery1@@AEAA@PEAUIConstantString@1@@Z
    EntityInfo(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EntityInfo@StructuredQuery1@@AEAA@XZ
    ~EntityInfo();
};
} // namespace StructuredQuery1
