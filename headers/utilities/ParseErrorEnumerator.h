#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 17 member(s).
namespace StructuredQuery1 {
class ParseErrorEnumerator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ParseErrorEnumerator@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@ParseErrorEnumerator@StructuredQuery1@@UEAAJPEAPEAUIEnumUnknown@@@Z
    virtual long Clone(IEnumUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@ParseErrorEnumerator@StructuredQuery1@@UEAAJPEAPEAUIEnumVARIANT@@@Z
    virtual long Clone(IEnumVARIANT * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ParseErrorEnumerator@StructuredQuery1@@SAJPEAVSolution@2@KAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(WindissectOpaque *, unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@ParseErrorEnumerator@StructuredQuery1@@UEAAJKPEAPEAUIUnknown@@PEAK@Z
    virtual long Next(unsigned long, IUnknown * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@ParseErrorEnumerator@StructuredQuery1@@UEAAJKPEAUtagVARIANT@@PEAK@Z
    virtual long Next(unsigned long, tagVARIANT *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ParseErrorEnumerator@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ParseErrorEnumerator@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@ParseErrorEnumerator@StructuredQuery1@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@ParseErrorEnumerator@StructuredQuery1@@UEAAJK@Z
    virtual long Skip(unsigned long);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ParseErrorEnumerator@StructuredQuery1@@AEAA@PEAVSolution@1@K@Z
    ParseErrorEnumerator(WindissectOpaque *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ParseErrorEnumerator@StructuredQuery1@@AEAA@XZ
    ~ParseErrorEnumerator();
};
} // namespace StructuredQuery1
