#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 22 member(s).
namespace StructuredQuery1 {
class BaseCondition {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BaseCondition@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttribute@BaseCondition@StructuredQuery1@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetAttribute(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributes@BaseCondition@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetAttributes(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@BaseCondition@StructuredQuery1@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirty@BaseCondition@StructuredQuery1@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@BaseCondition@StructuredQuery1@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@BaseCondition@StructuredQuery1@@UEAAJPEAUIXMLDOMNode@@@Z
    virtual long Load(IXMLDOMNode *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BaseCondition@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BaseCondition@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@BaseCondition@StructuredQuery1@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@BaseCondition@StructuredQuery1@@UEAAJPEAUIXMLDOMNode@@@Z
    virtual long Save(IXMLDOMNode *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAttribute@BaseCondition@StructuredQuery1@@UEAAJAEBU_GUID@@PEAUIConditionAttribute@@@Z
    virtual long SetAttribute(_GUID const &, IConditionAttribute *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BaseCondition@StructuredQuery1@@IEAA@XZ
    BaseCondition();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BaseCondition@StructuredQuery1@@MEAA@XZ
    virtual ~BaseCondition();
};
} // namespace StructuredQuery1
