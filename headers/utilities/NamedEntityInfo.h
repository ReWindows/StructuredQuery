#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 17 member(s).
namespace StructuredQuery1 {
class NamedEntityInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@NamedEntityInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@NamedEntityInfo@StructuredQuery1@@SAJPEAUIConstantString@2@00AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Display@NamedEntityInfo@StructuredQuery1@@UEAAJPEAX_K11@Z
    virtual long Display(void *, uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Name@NamedEntityInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Name(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Populate@NamedEntityInfo@StructuredQuery1@@UEAAJPEBVSchemaStore@2@PEBVSchemaBinary@SemanticsUM@@PEAVNamedEntity@5@@Z
    virtual long Populate(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreferredPhrase@NamedEntityInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long PreferredPhrase(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@NamedEntityInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@NamedEntityInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsafeName@NamedEntityInfo@StructuredQuery1@@UEAAPEB_WXZ
    virtual wchar_t const * UnsafeName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsafePreferredPhrase@NamedEntityInfo@StructuredQuery1@@UEAAPEB_WXZ
    virtual wchar_t const * UnsafePreferredPhrase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsafeValue@NamedEntityInfo@StructuredQuery1@@UEAAPEB_WXZ
    virtual wchar_t const * UnsafeValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Value@NamedEntityInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Value(_GUID const &, void * *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NamedEntityInfo@StructuredQuery1@@AEAA@PEAUIConstantString@1@00@Z
    NamedEntityInfo(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NamedEntityInfo@StructuredQuery1@@AEAA@XZ
    ~NamedEntityInfo();
};
} // namespace StructuredQuery1
