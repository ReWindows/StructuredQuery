#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 20 member(s).
namespace StructuredQuery1 {
class MetaDataInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MetaDataInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareTo@MetaDataInfo@StructuredQuery1@@UEAAHPEAUIUnknown@@@Z
    virtual int CompareTo(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@MetaDataInfo@StructuredQuery1@@SAJPEB_W0AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(wchar_t const *, wchar_t const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Display@MetaDataInfo@StructuredQuery1@@UEAAJPEAX_K11@Z
    virtual long Display(void *, uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Key@MetaDataInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Key(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Populate@MetaDataInfo@StructuredQuery1@@UEAAJPEBVSchemaStore@2@PEBVSchemaBinary@SemanticsUM@@PEAVMetaData@5@@Z
    virtual long Populate(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prepare1@MetaDataInfo@StructuredQuery1@@UEAAJPEAUIHashtable@2@PEAUIList@2@@Z
    virtual long Prepare1(WindissectOpaque *, WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MetaDataInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MetaDataInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsafeKey@MetaDataInfo@StructuredQuery1@@UEAAPEB_WXZ
    virtual wchar_t const * UnsafeKey();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsafeValue@MetaDataInfo@StructuredQuery1@@UEAAPEB_WXZ
    virtual wchar_t const * UnsafeValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Value@MetaDataInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Value(_GUID const &, void * *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MetaDataInfo@StructuredQuery1@@AEAA@PEAUIConstantString@1@0@Z
    MetaDataInfo(WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MetaDataInfo@StructuredQuery1@@AEAA@XZ
    ~MetaDataInfo();
};
} // namespace StructuredQuery1
