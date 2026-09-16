#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 21 member(s).
namespace StructuredQuery1 {
class SemanticSearchParameters {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@SemanticSearchParameters@StructuredQuery1@@UEAAJPEAPEAUIConditionAttribute@@@Z
    virtual long Clone(IConditionAttribute * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@SemanticSearchParameters@StructuredQuery1@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@SemanticSearchParameters@StructuredQuery1@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexerQueryOptions@SemanticSearchParameters@StructuredQuery1@@UEAAJPEAW4INDEXER_QUERY_OPTIONS@@@Z
    virtual long GetIndexerQueryOptions(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMergeStrategy@SemanticSearchParameters@StructuredQuery1@@UEAAJPEAW4tagMERGE_STRATEGY@@@Z
    virtual long GetMergeStrategy(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@SemanticSearchParameters@StructuredQuery1@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SemanticSearchParameters@StructuredQuery1@@UEAAJW4INDEXER_QUERY_OPTIONS@@W4tagMERGE_STRATEGY@@@Z
    virtual long Initialize(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirty@SemanticSearchParameters@StructuredQuery1@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@SemanticSearchParameters@StructuredQuery1@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@SemanticSearchParameters@StructuredQuery1@@UEAAJPEAUIXMLDOMNode@@@Z
    virtual long Load(IXMLDOMNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@SemanticSearchParameters@StructuredQuery1@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@SemanticSearchParameters@StructuredQuery1@@UEAAJPEAUIXMLDOMNode@@@Z
    virtual long Save(IXMLDOMNode *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SemanticSearchParameters@StructuredQuery1@@QEAA@XZ
    SemanticSearchParameters();
};
} // namespace StructuredQuery1
