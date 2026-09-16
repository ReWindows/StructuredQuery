#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 23 member(s).
namespace StructuredQuery1 {
class PathNodeInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PathNodeInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PathNodeInfo@StructuredQuery1@@SAJPEAUIEntityInfo@2@PEAUIRelationshipInfo@2@PEAUIPathNodeInfo@2@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Display@PathNodeInfo@StructuredQuery1@@UEAAJPEAX_K11@Z
    virtual long Display(void *, uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Entity@PathNodeInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Entity(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@PathNodeInfo@StructuredQuery1@@UEAAHPEAUIUnknown@@@Z
    virtual int Equals(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashCode@PathNodeInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long GetHashCode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAncestorWithEntity@PathNodeInfo@StructuredQuery1@@UEAAHPEAUIEntityInfo@2@@Z
    virtual int HasAncestorWithEntity(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasEntityAndParent@PathNodeInfo@StructuredQuery1@@UEAAHPEAUIEntityInfo@2@PEAUIPathNodeInfo@2@@Z
    virtual int HasEntityAndParent(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parent@PathNodeInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Parent(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Populate@PathNodeInfo@StructuredQuery1@@UEAAJPEBVSchemaStore@2@PEBVSchemaBinary@SemanticsUM@@PEAVPathNode@5@@Z
    virtual long Populate(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PathNodeInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Relationship@PathNodeInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Relationship(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PathNodeInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsafeEntityName@PathNodeInfo@StructuredQuery1@@UEAAPEB_WXZ
    virtual wchar_t const * UnsafeEntityName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsafeRelationName@PathNodeInfo@StructuredQuery1@@UEAAPEB_WXZ
    virtual wchar_t const * UnsafeRelationName();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PathNodeInfo@StructuredQuery1@@AEAA@PEAUIEntityInfo@1@PEAUIRelationshipInfo@1@PEAUIPathNodeInfo@1@@Z
    PathNodeInfo(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PathNodeInfo@StructuredQuery1@@AEAA@XZ
    ~PathNodeInfo();
};
} // namespace StructuredQuery1
