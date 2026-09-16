#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 18 member(s).
namespace StructuredQuery1 {
class QueryExpressionCustomization {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPseudoProperty@QueryExpressionCustomization@StructuredQuery1@@QEAAJPEB_W0W4tagCONDITION_OPERATION@@@Z
    long AddPseudoProperty(wchar_t const *, wchar_t const *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@QueryExpressionCustomization@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@QueryExpressionCustomization@StructuredQuery1@@SAJPEAVSchemaEngine@SemanticsUM@@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@QueryExpressionCustomization@StructuredQuery1@@UEAAJKPEAU_tagpropertykey@@PEAPEAU3@PEAK@Z
    virtual long GetAt(unsigned long, _tagpropertykey *, _tagpropertykey * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@QueryExpressionCustomization@StructuredQuery1@@UEAAJPEAK@Z
    virtual long GetCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomHandler@QueryExpressionCustomization@StructuredQuery1@@QEBAJPEBVIEntity@SemanticsUM@@PEAPEAUIConditionGenerator@@@Z
    long GetCustomHandler(WindissectOpaque const *, IConditionGenerator * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@QueryExpressionCustomization@StructuredQuery1@@UEAAJAEBU_tagpropertykey@@PEAPEAU3@PEAK@Z
    virtual long GetProperty(_tagpropertykey const &, _tagpropertykey * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupDefaultProperty@QueryExpressionCustomization@StructuredQuery1@@QEBAXPEBVIEntity@SemanticsUM@@PEAU_tagpropertykey@@@Z
    void LookupDefaultProperty(WindissectOpaque const *, _tagpropertykey *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@QueryExpressionCustomization@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReinitializeNamedEntityHandlersAsNeeded@QueryExpressionCustomization@StructuredQuery1@@QEAAJXZ
    long ReinitializeNamedEntityHandlersAsNeeded();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@QueryExpressionCustomization@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplacePseudoProperty@QueryExpressionCustomization@StructuredQuery1@@QEBAJPEAU_tagpropertykey@@PEAW4tagCONDITION_OPERATION@@@Z
    long ReplacePseudoProperty(_tagpropertykey *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultProperty@QueryExpressionCustomization@StructuredQuery1@@QEAAJPEBVIEntity@SemanticsUM@@PEB_W@Z
    long SetDefaultProperty(WindissectOpaque const *, wchar_t const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandlerForType@QueryExpressionCustomization@StructuredQuery1@@QEAAJPEBVIEntity@SemanticsUM@@PEAUIConditionGenerator@@@Z
    long SetHandlerForType(WindissectOpaque const *, IConditionGenerator *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyMap@QueryExpressionCustomization@StructuredQuery1@@QEAAJPEB_WPEBQEB_WK@Z
    long SetPropertyMap(wchar_t const *, wchar_t const * const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SomeNamedEntityHandlerRequiresReinitialization@QueryExpressionCustomization@StructuredQuery1@@QEAAHXZ
    int SomeNamedEntityHandlerRequiresReinitialization();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@QueryExpressionCustomization@StructuredQuery1@@AEAAJPEAVSchemaEngine@SemanticsUM@@@Z
    long Initialize(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QueryExpressionCustomization@StructuredQuery1@@AEAA@XZ
    ~QueryExpressionCustomization();
};
} // namespace StructuredQuery1
