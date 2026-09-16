#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 9 member(s).
namespace StructuredQuery1 {
class AttributeEnumerator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AttributeEnumerator@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@AttributeEnumerator@StructuredQuery1@@UEAAJPEAPEAUIEnumUnknown@@@Z
    virtual long Clone(IEnumUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@AttributeEnumerator@StructuredQuery1@@SAJPEAVBaseCondition@2@KAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(WindissectOpaque *, unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@AttributeEnumerator@StructuredQuery1@@UEAAJKPEAPEAUIUnknown@@PEAK@Z
    virtual long Next(unsigned long, IUnknown * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AttributeEnumerator@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AttributeEnumerator@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@AttributeEnumerator@StructuredQuery1@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@AttributeEnumerator@StructuredQuery1@@UEAAJK@Z
    virtual long Skip(unsigned long);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AttributeEnumerator@StructuredQuery1@@AEAA@XZ
    ~AttributeEnumerator();
};
} // namespace StructuredQuery1
