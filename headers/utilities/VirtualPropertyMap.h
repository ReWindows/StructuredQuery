#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 13 member(s).
namespace StructuredQuery1 {
class VirtualPropertyMap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMostRelevantProperties@VirtualPropertyMap@StructuredQuery1@@QEAAJPEAUIPropertyDescriptionList@@@Z
    long AddMostRelevantProperties(IPropertyDescriptionList *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VirtualPropertyMap@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVirtualProperties@VirtualPropertyMap@StructuredQuery1@@QEAAJPEAUICondition2@@@Z
    long AddVirtualProperties(ICondition2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@VirtualPropertyMap@StructuredQuery1@@SAJPEBUVIRTUAL_PROPERTY_INFO@2@KPEAPEAV12@@Z
    static long Create(WindissectOpaque const *, unsigned long, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlias@VirtualPropertyMap@StructuredQuery1@@QEAAJAEBU_tagpropertykey@@PEAPEA_W@Z
    long GetAlias(_tagpropertykey const &, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@VirtualPropertyMap@StructuredQuery1@@QEAAJPEBUVIRTUAL_PROPERTY_INFO@2@K@Z
    long Initialize(WindissectOpaque const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupVirtualProperty@VirtualPropertyMap@StructuredQuery1@@QEAAJAEBU_tagpropertykey@@PEAPEBUVIRTUAL_PROPERTY_INFO@2@@Z
    long LookupVirtualProperty(_tagpropertykey const &, WindissectOpaque const * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VirtualPropertyMap@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VirtualPropertyMap@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteAllWithAs@VirtualPropertyMap@StructuredQuery1@@QEAAJPEA_W_KW4SQL_GENERATION_OPTIONS@@PEAPEA_WPEA_K@Z
    long WriteAllWithAs(wchar_t *, uint64_t, int, wchar_t * *, uint64_t *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteExpansion@VirtualPropertyMap@StructuredQuery1@@AEAAJPEA_W_KAEBU_tagpropertykey@@PEBUVIRTUAL_PROPERTY_INFO@2@PEAHPEAPEA_WPEA_K@Z
    long WriteExpansion(wchar_t *, uint64_t, _tagpropertykey const &, WindissectOpaque const *, int *, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteOneWithAs@VirtualPropertyMap@StructuredQuery1@@AEAAJPEA_W_KPEBUVIRTUAL_PROPERTY_INFO@2@PEAPEA_WPEA_K@Z
    long WriteOneWithAs(wchar_t *, uint64_t, WindissectOpaque const *, wchar_t * *, uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VirtualPropertyMap@StructuredQuery1@@AEAA@XZ
    ~VirtualPropertyMap();
};
} // namespace StructuredQuery1
