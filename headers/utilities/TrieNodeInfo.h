#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 22 member(s).
namespace StructuredQuery1 {
class TrieNodeInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFragment@TrieNodeInfo@StructuredQuery1@@UEAAJPEAUIFragmentInfo@2@@Z
    virtual long AddFragment(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TrieNodeInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Children@TrieNodeInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Children(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildrenForceCreation@TrieNodeInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long ChildrenForceCreation(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareTo@TrieNodeInfo@StructuredQuery1@@UEAAHPEAUIUnknown@@@Z
    virtual int CompareTo(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@TrieNodeInfo@StructuredQuery1@@SAJPEAUIConstantString@2@KAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(WindissectOpaque *, unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Display@TrieNodeInfo@StructuredQuery1@@UEAAJPEAX_K11@Z
    virtual long Display(void *, uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateRecursively@TrieNodeInfo@StructuredQuery1@@UEAAJPEA_KPEAUIList@2@@Z
    virtual long EnumerateRecursively(uint64_t *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Populate@TrieNodeInfo@StructuredQuery1@@UEAAJPEBVSchemaStore@2@PEBVSchemaBinary@SemanticsUM@@PEAVTrieNode@5@@Z
    virtual long Populate(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateRecursively@TrieNodeInfo@StructuredQuery1@@UEAAJPEBVSchemaStore@2@PEBVSchemaBinary@SemanticsUM@@@Z
    virtual long PopulateRecursively(WindissectOpaque const *, WindissectOpaque const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TrieNodeInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TrieNodeInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Token@TrieNodeInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Token(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsafeToken@TrieNodeInfo@StructuredQuery1@@UEAAPEB_WXZ
    virtual wchar_t const * UnsafeToken();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TrieNodeInfo@StructuredQuery1@@IEAA@XZ
    ~TrieNodeInfo();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TrieNodeInfo@StructuredQuery1@@AEAA@PEAUIConstantString@1@K@Z
    TrieNodeInfo(WindissectOpaque *, unsigned long);
};
} // namespace StructuredQuery1
