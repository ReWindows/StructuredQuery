#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 28 member(s).
namespace StructuredQuery1 {
class RestrictionInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddIndicator@RestrictionInfo@StructuredQuery1@@UEAAJPEAUIIndicatorInfo@2@@Z
    virtual long AddIndicator(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddName@RestrictionInfo@StructuredQuery1@@UEAAJPEB_W@Z
    virtual long AddName(wchar_t const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RestrictionInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareTo@RestrictionInfo@StructuredQuery1@@UEAAHPEAUIUnknown@@@Z
    virtual int CompareTo(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFragmentsAndTrie@RestrictionInfo@StructuredQuery1@@UEAAJPEAUIEntityInfo@2@PEAUIRelationshipInfo@2@PEAUIList@2@PEAVTrie@2@PEAUIHashtable@2@K@Z
    virtual long CreateFragmentsAndTrie(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@RestrictionInfo@StructuredQuery1@@SAJPEB_WHAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(wchar_t const *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Display@RestrictionInfo@StructuredQuery1@@UEAAJPEAX_K11@Z
    virtual long Display(void *, uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndicatorCount@RestrictionInfo@StructuredQuery1@@UEAA_KXZ
    virtual uint64_t IndicatorCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Indicators@RestrictionInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Indicators(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Name@RestrictionInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Name(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NamedEntity@RestrictionInfo@StructuredQuery1@@UEAAHXZ
    virtual int NamedEntity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prepare1@RestrictionInfo@StructuredQuery1@@UEAAJPEAUIHashtable@2@@Z
    virtual long Prepare1(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RestrictionInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RestrictionInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Text@RestrictionInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Text(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsafeName@RestrictionInfo@StructuredQuery1@@UEAAPEB_WXZ
    virtual wchar_t const * UnsafeName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsafeText@RestrictionInfo@StructuredQuery1@@UEAAPEB_WXZ
    virtual wchar_t const * UnsafeText();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RestrictionInfo@StructuredQuery1@@AEAA@PEAUIConstantString@1@H@Z
    RestrictionInfo(WindissectOpaque *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RestrictionInfo@StructuredQuery1@@AEAA@XZ
    ~RestrictionInfo();
};
} // namespace StructuredQuery1
